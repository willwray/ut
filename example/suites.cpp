//
// Copyright (c) 2019 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#include <boost/ut.hpp>

using boost::ut::operator""_test;

auto _ = "test suite"_test = [] {
  using namespace boost::ut;
  "should be equal"_test = [] { expect(42_i == 42); };
  "should not be equal "_test = [] { expect(1_i != 2); };
};

int main() {}
