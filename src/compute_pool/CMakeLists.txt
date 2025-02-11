set(RW_SRC
    rw_server.cpp
)

add_executable(rw_server ${RW_SRC})

set(opentelemetry-cpp_DIR ../../otel-cpp/lib/cmake/opentelemetry-cpp)
find_package(CURL)
find_package(nlohmann_json)
# Use find_package to include OpenTelemetry C++
find_package(opentelemetry-cpp CONFIG REQUIRED NO_DEFAULT_PATH)

target_link_libraries(rw_server parser execution readline pthread planner analyze cjson workload rdma_util multi_version_record -lfmt ${OPENTELEMETRY_CPP_LIBRARIES})

# set(RO_SRC
#     ro_server.cpp
# )

# add_executable(ro_server ${RO_SRC})

# target_link_libraries(ro_server parser execution readline pthread planner analyze multi_version_record)