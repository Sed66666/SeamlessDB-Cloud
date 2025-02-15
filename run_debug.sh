set -e

rm -rf /build/db_tpcc
bash build_debug.sh
cd build_debug
./bin/storage_pool &
sleep 8
./bin/state_pool &
sleep 8
./bin/rw_server active rw &
# sleep 8
# /root/SeamlessDB-Cloud/seamless_client/build/seamless_client