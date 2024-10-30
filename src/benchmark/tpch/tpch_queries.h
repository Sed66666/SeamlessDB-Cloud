#pragma once

#include "benchmark/native_txn.h"
#include "tpch_config.h"
#include "benchmark/util/random.h"
#include "benchmark/util/clock.h"


class QueryExample : public NativeTransaction {
public:

    void generate_new_txn() override {

        queries.push_back("begin;");
        queries.push_back("select l_extendedprice, l_discount from lineitem where l_shipdate >= '1995-01-01';");
        queries.push_back("commit;");

        return ;
    }
};