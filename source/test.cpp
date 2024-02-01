#include <iostream>

#include "KUNI_graph.hpp"
#include "KUNI_random.hpp"

int main() {
    KUNI::graph::hello();
    std::cout << "A super random number: " << KUNI::random::random() << '\n';

    std::exit(EXIT_SUCCESS);
}