add_executable(test_basic test_calc.cpp)
target_link_libraries(test_basic PRIVATE calc_lib)
add_test(NAME BasicMathTest COMMAND test_basic)

add_executable(test_prime test_prime.cpp)
target_link_libraries(test_prime PRIVATE calc_lib)
add_test(NAME PrimeTest COMMAND test_prime)