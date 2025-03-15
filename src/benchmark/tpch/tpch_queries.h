#pragma once

#include "benchmark/native_txn.h"
#include "benchmark/util/clock.h"
#include "benchmark/util/random.h"
#include "tpch_config.h"

class QueryExample : public NativeTransaction {
public:
  void generate_new_txn() override {

    queries.push_back("begin;");
    queries.push_back("select l_extendedprice, l_discount from lineitem where "
                      "l_shipdate >= '1995-01-01';");
    queries.push_back("commit;");

    return;
  }
};

// class Query5 : public NativeTransaction {
// public:
//   void generate_new_txn() override {

//     queries.push_back("begin;");
//     queries.push_back("select l_extendedprice, l_discount from lineitem where
//     "
//                       "l_shipdate >= '1995-01-01';");
//     queries.push_back("commit;");

//     return;
//   }
// };

// class Query10 : public NativeTransaction {
// public:
//   void generate_new_txn() override {

//     queries.push_back("begin;");
//     queries.push_back("select l_extendedprice, l_discount from lineitem where
//     "
//                       "l_shipdate >= '1995-01-01';");
//     queries.push_back("commit;");

//     return;
//   }
// }
// ;