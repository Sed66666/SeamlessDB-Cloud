#include <brpc/controller.h>
#include <opentelemetry/context/propagation/text_map_propagator.h>

using namespace opentelemetry::trace;
using namespace opentelemetry::context::propagation;
using namespace opentelemetry::nostd;

class BrpcTextMapCarrier : public TextMapCarrier {
public:
  explicit BrpcTextMapCarrier(brpc::Controller *cntl) : cntl_(cntl) {}

  string_view Get(string_view key) const noexcept override {
    return cntl_->http_request().GetHeader(key.data())->c_str();
  }

  void Set(string_view key, string_view value) noexcept override {
    cntl_->http_request().SetHeader(std::string(key), std::string(value));
  }

private:
  brpc::Controller *cntl_;
};