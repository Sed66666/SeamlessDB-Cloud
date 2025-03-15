set -ex

# ./killall.sh
rm -rf build/enable-trace/db_tpcc
cmake --preset enable-trace
cmake --build build/enable-trace --parallel 38 --
cd build/enable-trace
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw