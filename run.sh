set -ex

# ./killall.sh
rm -rf build/release/db_tpcc
cmake --preset release
cmake --build build/release --parallel 38 --
cd build/release
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw