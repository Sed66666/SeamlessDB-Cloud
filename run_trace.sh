set -ex

# ./killall.sh
rm -rf /build_trace/db_tpcc
bash build_trace.sh
cd build_trace
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
./bin/rw_server active rw &

# sleep 8
# /root/SeamlessDB-Cloud/seamless_client/build/seamless_client