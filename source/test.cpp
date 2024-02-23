#include <iostream>

#include "KUNI_graph.hpp"
#include <gtest/gtest.h>

TEST(directed_graph, create_and_destroy) {
    KUNI::graph::directed_graph graph {};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_count_empty) {
    KUNI::graph::directed_graph graph {};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_count_nonempty) {
    KUNI::graph::directed_graph graph {{32, 64}, {{}, {}}};
    constexpr auto expected {2};

    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_value) {
    KUNI::graph::directed_graph graph {{32, 64}, {{}, {}}};
    constexpr auto expected {32};

    EXPECT_EQ(expected, graph.node_value(0));
}