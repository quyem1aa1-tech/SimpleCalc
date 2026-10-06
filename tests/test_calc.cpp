#include <cassert>
#include <iostream>
#include "calc/calculator.hpp"

int main()
{
    // Kiem tra phep tinh co ban
    assert(calc::add(2.0, 3.0) == 5.0);
    assert(calc::subtract(5.0, 2.0) == 3.0);
    assert(calc::multiply(3.0, 4.0) == 12.0);
    assert(calc::divide(10.0, 2.0) == 5.0);

    // Kiem tra ngoai le chia cho 0
    bool caught = false;
    try
    {
        calc::divide(4.0, 0.0);
    }
    catch (const std::invalid_argument &)
    {
        caught = true;
    }
    assert(caught == true);

    std::cout << "All tests passed!\n";
    return 0;
}