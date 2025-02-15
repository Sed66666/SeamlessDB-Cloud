export PATH=$PATH:/usr/local/go/bin
cd /root/prometheus-2.53.3.linux-amd64
./prometheus &
export OTEL_TRACES_SAMPLER=always_off
cd /root/jaeger
go run ./cmd/jaeger --config=/root/jaeger/cmd/jaeger/config-spm.yaml &
