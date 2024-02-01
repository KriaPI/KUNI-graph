project('KUNI-graph', 'cpp',
    default_options: ['cpp_std=c++17', 'warning_level=everything']
)

KUNI_include_path = include_directories('source/include', 'source/random')
KUNI_graph = library('KUNI_graph', 'source/graph/KUNI_graph.cpp', include_directories: KUNI_include_path)
KUNI_random = library('KUNI_random', 'source/random/KUNI_random.cpp', include_directories: KUNI_include_path)

executable('KUNI_test', 'source/test.cpp', link_with: [KUNI_graph, KUNI_random], include_directories: KUNI_include_path)