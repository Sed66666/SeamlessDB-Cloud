#pragma once

#include <brpc/channel.h>

#include "log_replay.h"
#include "recovery/log_manager.h"
#include "storage/disk_manager.h"
#include "storage/storage_rpc.h"
#include "storage_defs.h"
#include "system/sm_manager.h"

#include <opentelemetry/exporters/otlp/otlp_http_exporter_factory.h>
#include <opentelemetry/sdk/trace/batch_span_processor_factory.h>
#include <opentelemetry/sdk/trace/tracer_provider_factory.h>
#include <opentelemetry/trace/provider.h>
#include <opentelemetry/trace/span_context.h>
#include <opentelemetry/trace/span_startoptions.h>

namespace trace_api = opentelemetry::trace;
namespace trace_sdk = opentelemetry::sdk::trace;
namespace trace_resource = opentelemetry::sdk::resource;
namespace trace_exporter = opentelemetry::exporter::otlp;
class StorageServer {
public:
  StorageServer(int machine_id, int local_rpc_port, DiskManager *disk_manager,
                LogStore *log_store, ShareStatus *share_status,
                BufferPoolManager *buffer_pool_mgr)
      : disk_manager_(disk_manager), log_store_(log_store),
        share_status_(share_status), buffer_pool_mgr_(buffer_pool_mgr) {
    brpc::Server server;
    storage_service::StoragePoolImpl storage_pool_rpc(
        disk_manager, log_store, share_status, buffer_pool_mgr_);
    if (server.AddService(&storage_pool_rpc, brpc::SERVER_DOESNT_OWN_SERVICE) !=
        0) {
      LOG(ERROR) << "Failed to add service.";
    }
    butil::EndPoint point;
    point = butil::EndPoint(butil::IP_ANY, local_rpc_port);

    brpc::ServerOptions options;

    if (server.Start(point, &options) != 0) {
      LOG(ERROR) << "Failed to start server.";
    }

    // pthread_setname_np(pthread_self(), std::to_string(thread_id).c_str());
    trace_resource::ResourceAttributes attributes = {
        {"service.name", "storage"}};
    auto resource = trace_resource::Resource::Create(attributes);
    auto exporter = trace_exporter::OtlpHttpExporterFactory::Create();
    auto processor = trace_sdk::BatchSpanProcessorFactory::Create(
        std::move(exporter), trace_sdk::BatchSpanProcessorOptions());
    std::shared_ptr<trace_api::TracerProvider> provider =
        trace_sdk::TracerProviderFactory::Create(std::move(processor),
                                                 resource);
    // set the global trace provider
    trace_api::Provider::SetTracerProvider(provider);
    auto tracer =
        trace_api::Provider::GetTracerProvider()->GetTracer("WOOKONG-tracer");

    server.RunUntilAskedToQuit();
  }

  SmManager *sm_mgr_;
  IxManager *ix_mgr_;
  MultiVersionManager *mvcc_manager;
  BufferPoolManager *buffer_pool_mgr_;
  DiskManager *disk_manager_;
  LogStore *log_store_;
  ShareStatus *share_status_;
  std::string workload_;
};