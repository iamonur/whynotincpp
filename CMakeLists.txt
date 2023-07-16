cmake_minimum_required(VERSION 3.0.0)
project(neuralnet VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(source/helpers)
include_directories(tests)

aux_source_directory(source/helpers HELPERS)

add_executable(helper_tests ${HELPERS} tests/helper_tests.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
