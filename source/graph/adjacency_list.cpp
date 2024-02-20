#include "KUNI_graph.hpp"
#include <cstddef>

auto KUNI::graph::directed_graph::vertex_count() const noexcept -> std::size_t {
    return m_nodes.size();
}

auto KUNI::graph::directed_graph::edge_count() const noexcept -> std::size_t {
    return 0;
}