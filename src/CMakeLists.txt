add_library(calc_lib STATIC 
    calculator.cpp
    internal_math.cpp 
)

target_include_directories(calc_lib PUBLIC 
    ${CMAKE_SOURCE_DIR}/include
)

target_include_directories(calc_lib PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(calc_lib PRIVATE
    -Wall
    -Wextra
)

