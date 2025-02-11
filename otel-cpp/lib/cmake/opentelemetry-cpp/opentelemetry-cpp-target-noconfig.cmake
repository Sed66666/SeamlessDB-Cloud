#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "opentelemetry-cpp::proto" for configuration ""
set_property(TARGET opentelemetry-cpp::proto APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::proto PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_proto.so"
  IMPORTED_SONAME_NOCONFIG "libopentelemetry_proto.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::proto )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::proto "${_IMPORT_PREFIX}/lib/libopentelemetry_proto.so" )

# Import target "opentelemetry-cpp::common" for configuration ""
set_property(TARGET opentelemetry-cpp::common APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::common PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_common.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::common )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::common "${_IMPORT_PREFIX}/lib/libopentelemetry_common.a" )

# Import target "opentelemetry-cpp::trace" for configuration ""
set_property(TARGET opentelemetry-cpp::trace APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::trace PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_trace.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::trace )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::trace "${_IMPORT_PREFIX}/lib/libopentelemetry_trace.a" )

# Import target "opentelemetry-cpp::metrics" for configuration ""
set_property(TARGET opentelemetry-cpp::metrics APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::metrics PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_metrics.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::metrics )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::metrics "${_IMPORT_PREFIX}/lib/libopentelemetry_metrics.a" )

# Import target "opentelemetry-cpp::logs" for configuration ""
set_property(TARGET opentelemetry-cpp::logs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::logs PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_logs.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::logs )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::logs "${_IMPORT_PREFIX}/lib/libopentelemetry_logs.a" )

# Import target "opentelemetry-cpp::version" for configuration ""
set_property(TARGET opentelemetry-cpp::version APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::version PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_version.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::version )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::version "${_IMPORT_PREFIX}/lib/libopentelemetry_version.a" )

# Import target "opentelemetry-cpp::resources" for configuration ""
set_property(TARGET opentelemetry-cpp::resources APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::resources PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_resources.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::resources )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::resources "${_IMPORT_PREFIX}/lib/libopentelemetry_resources.a" )

# Import target "opentelemetry-cpp::http_client_curl" for configuration ""
set_property(TARGET opentelemetry-cpp::http_client_curl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::http_client_curl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_http_client_curl.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::http_client_curl )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::http_client_curl "${_IMPORT_PREFIX}/lib/libopentelemetry_http_client_curl.a" )

# Import target "opentelemetry-cpp::otlp_recordable" for configuration ""
set_property(TARGET opentelemetry-cpp::otlp_recordable APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::otlp_recordable PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_otlp_recordable.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::otlp_recordable )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::otlp_recordable "${_IMPORT_PREFIX}/lib/libopentelemetry_otlp_recordable.a" )

# Import target "opentelemetry-cpp::otlp_http_client" for configuration ""
set_property(TARGET opentelemetry-cpp::otlp_http_client APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::otlp_http_client PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_client.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::otlp_http_client )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::otlp_http_client "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_client.a" )

# Import target "opentelemetry-cpp::otlp_http_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::otlp_http_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::otlp_http_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::otlp_http_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::otlp_http_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http.a" )

# Import target "opentelemetry-cpp::otlp_http_log_record_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::otlp_http_log_record_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::otlp_http_log_record_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_log.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::otlp_http_log_record_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::otlp_http_log_record_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_log.a" )

# Import target "opentelemetry-cpp::otlp_http_metric_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::otlp_http_metric_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::otlp_http_metric_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_metric.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::otlp_http_metric_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::otlp_http_metric_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_otlp_http_metric.a" )

# Import target "opentelemetry-cpp::ostream_span_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::ostream_span_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::ostream_span_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_span.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::ostream_span_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::ostream_span_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_span.a" )

# Import target "opentelemetry-cpp::ostream_metrics_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::ostream_metrics_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::ostream_metrics_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_metrics.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::ostream_metrics_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::ostream_metrics_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_metrics.a" )

# Import target "opentelemetry-cpp::ostream_log_record_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::ostream_log_record_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::ostream_log_record_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_logs.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::ostream_log_record_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::ostream_log_record_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_ostream_logs.a" )

# Import target "opentelemetry-cpp::in_memory_span_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::in_memory_span_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::in_memory_span_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_in_memory.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::in_memory_span_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::in_memory_span_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_in_memory.a" )

# Import target "opentelemetry-cpp::in_memory_metric_exporter" for configuration ""
set_property(TARGET opentelemetry-cpp::in_memory_metric_exporter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opentelemetry-cpp::in_memory_metric_exporter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_in_memory_metric.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opentelemetry-cpp::in_memory_metric_exporter )
list(APPEND _IMPORT_CHECK_FILES_FOR_opentelemetry-cpp::in_memory_metric_exporter "${_IMPORT_PREFIX}/lib/libopentelemetry_exporter_in_memory_metric.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
