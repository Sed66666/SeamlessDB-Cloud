set -ex

pkill -f 'rw|state|storage' || true
cmake --preset release
cmake --build build/release --parallel 38 --
workload=$(jq -r '.rw_node.workload' src/config/compute_server_config.json)
rm -rf build/release/db_tpcc
rm -rf build/release/db_tpch
cd build/release
./bin/storage_pool &
if [ $workload == 'tpch' ];then
    sleep 50
elif [ $workload == 'tpcc' ];then
    sleep 5
fi
./bin/state_pool &
# sleep 8
# \time -v ./bin/rw_server active rw