set -ex

pkill -f 'rw|state|storage' || true
cmake --preset enable-trace
cmake --build build/enable-trace --parallel 38 --
workload=$(jq -r '.rw_node.workload' src/config/compute_server_config.json)
rm -rf build/enable-trace/db_tpcc
rm -rf build/enable-trace/db_tpch
cd build/enable-trace
./bin/storage_pool &
if [ $workload == 'tpch' ];then
    sleep 50
elif [ $workload == 'tpcc' ];then
    sleep 5
fi
./bin/state_pool &
# sleep 8
# \time -v ./bin/rw_server active rw