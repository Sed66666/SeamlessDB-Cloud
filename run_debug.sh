set -ex

# ./killall.sh
rm -rf out/build/debug/db_tpcc
cmake --preset debug
cmake --build out/build/debug --parallel 38 --
cd out/build/debug
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
\time -v ./bin/rw_server active rw