project('KUNI-graph', 'cpp',
    default_options: ['cpp_std=c++17', 'warning_level=everything']
)

gtest_subproject = subproject('gtest')
gtest_dependency = gtest_subproject.get_variable('gtest_main_dep')

KUNI_include_path = include_directories('source/include', 'source/random')
KUNI_graph = library('KUNI_graph', 'source/graph/KUNI_graph.cpp', include_directories: KUNI_include_path)
KUNI_random = library('KUNI_random', 'source/random/KUNI_random.cpp', include_directories: KUNI_include_path)

KUNI_test = executable('KUNI_test', 'source/test.cpp', 
    link_with: [KUNI_graph, KUNI_random], 
    include_directories: KUNI_include_path,
    dependencies: [
        gtest_dependency
    ]
)
test('Unit test 0', KUNI_test)