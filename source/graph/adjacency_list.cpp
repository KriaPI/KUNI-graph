#include "KUNI_graph.hpp"
#include <cstddef>
#include <algorithm>

[[nodiscard]] auto KUNI::graph::directed_graph::node_count() const noexcept -> std::size_t {
    return m_nodes.size();
}

[[nodiscard]] auto KUNI::graph::directed_graph::edge_count() const noexcept -> std::size_t {
    return 0;
}

[[nodiscard]] auto KUNI::graph::directed_graph::node_value (std::size_t index) const -> int {
    return m_nodes.at(index);
}

[[nodiscard]] auto KUNI::graph::directed_graph::has_edge(std::size_t from, std::size_t to) const -> bool {
    auto starting_node_edges = m_graph.at(from);
    
    return std::find(starting_node_edges.cbegin(), starting_node_edges.cend(), to) != starting_node_edges.end();
}

[[nodiscard]] auto KUNI::graph::directed_graph::has_any_edge(std::size_t from) const -> bool {
    return !m_graph.at(from).empty();
}