#include <gtest/gtest.h>

#include <iostream>

#include "KUNI_graph.hpp"
#include "KUNI_random.hpp"

TEST(graph_test, addition) {
    auto expected = 4;
    EXPECT_EQ(expected, KUNI::graph::add_numbers(1, 3));
}