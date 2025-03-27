set -x

cd build/enable-trace
time ./bin/rw_server active rw &
sleep 5
perf record -F 20 --call-graph dwarf -g -e cpu-clock -p $(pidof rw_server) &
./bin/proxy rw
