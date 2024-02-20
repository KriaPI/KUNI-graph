#pragma once

#include <cstddef>
#include <vector>
#include <list>

namespace KUNI::graph {
    using node_index = std::size_t;

    class directed_graph {
        private: 
        std::vector<std::pair<node_index, int>> m_nodes {};
        std::vector<std::list<node_index>> m_graph {}; 

        public:
        /// @brief Create an empty directed graph. 
        directed_graph(): m_nodes{}, m_graph{} {}

        /// @brief Create a graph containing N nodes. The graph will not contain any edges initially.  
        /// @param nodes Pairs containing the index of a node and its value. 
        directed_graph(std::vector<std::pair<node_index, int>> nodes): m_nodes {nodes}, m_graph {}
        {}

        /// @brief Create a graph containing N nodes with edges. Note that the number of adjacency lists must correspond to the number of
        /// nodes. 
        /// @param nodes Pairs containing the index of a node and its value. 
        /// @param graph Adjacency lists used to represent the graph's edges. The Nth list (index N-1, indexing starts at 0), contains all nodes
        /// which node N contects to by an edge. For example: if a graph contains 3 nodes, and node 0 points to node 1 and node 2, the first list would be
        /// {1, 2}.    
        directed_graph(std::vector<std::pair<node_index, int>> nodes, std::vector<std::list<node_index>> graph):
            m_nodes {nodes}, m_graph {graph}
        {}

        [[nodiscard]] auto vertex_count() const noexcept -> std::size_t;
        [[nodiscard]] auto edge_count() const noexcept -> std::size_t;
    };
}