set -x

cd build/enable-trace
time ./bin/rw_server active rw &
sleep 5
./bin/proxy rw
