set -ex

# ./killall.sh
rm -rf out/build/enable-trace/db_tpcc
cmake --preset enable-trace
cmake --build out/build/enable-trace --parallel 38 --
cd out/build/enable-trace
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw