#include <iostream>

#include "KUNI_graph.hpp"
#include <gtest/gtest.h>

TEST(directed_graph, vertex_count_empty) {
    KUNI::graph::directed_graph graph {};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.vertex_count());
}

TEST(directed_graph, vertex_count_nonempty) {
    KUNI::graph::directed_graph graph {{{0, 0}, {1, 1}}, {{}, {}}};
    constexpr auto expected {2};

    EXPECT_EQ(expected, graph.vertex_count());
}