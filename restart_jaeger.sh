export PATH=$PATH:/usr/local/go/bin
export OTEL_TRACES_SAMPLER=always_off
cd /root/jaeger
pkill -f jaeger
go run ./cmd/jaeger --config=/root/jaeger/cmd/jaeger/config-spm.yaml &
