#include <iostream>
#include <cassert>
#include "calc/calculator.hpp"

int main()
{
    // Kiem tra cac truong hop so nguyen to
    assert(calc::check_prime(7) == true);
    assert(calc::check_prime(13) == true);

    // Kiem tra hop so va truong hop bien <= 1
    assert(calc::check_prime(4) == false);
    assert(calc::check_prime(1) == false);
    assert(calc::check_prime(0) == false);
    assert(calc::check_prime(-5) == false);

    std::cout << "[SUCCESS] Tat ca test prime deu vuot qua!\n";
    return 0;
}