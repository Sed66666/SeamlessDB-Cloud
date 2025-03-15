set -ex

# ./killall.sh
rm -rf out/build/release/db_tpcc
cmake --preset release
cmake --build out/build/release --parallel 38 --
cd out/build/release
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw