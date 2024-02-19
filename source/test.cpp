#include <iostream>

#include "KUNI_graph.hpp"
#include "KUNI_random.hpp"
#include <gtest/gtest.h>

TEST(adjacency_list_based, size) {
    auto graph {KUNI::graph::Adjacency_list_based_graph()};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.size());
}