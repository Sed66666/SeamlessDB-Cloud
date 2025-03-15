set -ex

# ./killall.sh
rm -rf build/debug/db_tpcc
cmake --preset debug
cmake --build build/debug --parallel 38 --
cd build/debug
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw