#include <iostream>

#include "KUNI_graph.hpp"
#include <gtest/gtest.h>

TEST(directed_graph, create_and_destroy) {
    const KUNI::graph::directed_graph graph {};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_count_empty) {
    const KUNI::graph::directed_graph graph {};
    constexpr auto expected {0};
    
    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_count_nonempty) {
    const KUNI::graph::directed_graph graph {{32, 64}, {{}, {}}};
    constexpr auto expected {2};

    EXPECT_EQ(expected, graph.node_count());
}

TEST(directed_graph, vertex_value) {
    const KUNI::graph::directed_graph graph {{32, 64}, {{}, {}}};
    constexpr auto expected {32};

    EXPECT_EQ(expected, graph.node_value(0));
}

TEST(directed_graph, has_edge_true) {
    const KUNI::graph::directed_graph graph {{32, 64, 128}, {{0, 1}, {0, 2}, {0}}};

    EXPECT_TRUE(graph.has_edge(0, 0));
    EXPECT_TRUE(graph.has_edge(0, 1));
    EXPECT_TRUE(graph.has_edge(1, 0));
    EXPECT_TRUE(graph.has_edge(1, 2));
    EXPECT_TRUE(graph.has_edge(2, 0));
} 

TEST(directed_graph, has_edge_false) {
    const KUNI::graph::directed_graph graph {{32, 64, 128}, {{1}, {0, 2}, {0}}};

    EXPECT_FALSE(graph.has_edge(2, 1));
    EXPECT_FALSE(graph.has_edge(2, 2));
} 

TEST(directed_graph, has_any_edges_false) {
    const KUNI::graph::directed_graph graph {{32, 64, 128}, {{}, {}, {}}};

    EXPECT_FALSE(graph.has_any_edge(0));
    EXPECT_FALSE(graph.has_any_edge(1));
    EXPECT_FALSE(graph.has_any_edge(2));
}

TEST(directed_graph, has_any_edges_true) {
    const KUNI::graph::directed_graph graph {{32, 64, 128}, {{1}, {2, 0}, {}}};

    EXPECT_TRUE(graph.has_any_edge(0));
    EXPECT_TRUE(graph.has_any_edge(1));
}