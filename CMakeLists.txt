cmake_minimum_required(VERSION 3.16)
project(01_SimpleCalc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)

#ctest --test-dir build --output-on-failure (use to test file)


