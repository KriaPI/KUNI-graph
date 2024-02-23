#include "KUNI_graph.hpp"
#include <cstddef>

[[nodiscard]] auto KUNI::graph::directed_graph::node_count() const noexcept -> std::size_t {
    return m_nodes.size();
}

[[nodiscard]] auto KUNI::graph::directed_graph::edge_count() const noexcept -> std::size_t {
    return 0;
}

[[nodiscard]] auto KUNI::graph::directed_graph::node_value (std::size_t index) const -> int {
    return m_nodes.at(index);
}