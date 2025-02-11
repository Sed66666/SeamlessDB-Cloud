set -e

rm -rf /build/db_tpcc
bash build.sh
cd build
./bin/storage_pool &
sleep 5
./bin/state_pool &
sleep 4
./bin/rw_server active rw &
sleep 4
/root/SeamlessDB-Cloud/seamless_client/build/seamless_client