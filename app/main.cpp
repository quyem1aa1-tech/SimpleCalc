#include <iostream>
#include "calc/calculator.hpp"

using namespace std;

int main()
{
    double x = 12.0;
    double y = 4.0;

    std::cout << "=== Test Library calc_lib ===\n";
    std::cout << x << " + " << y << " = " << calc::add(x, y) << "\n";
    std::cout << x << " - " << y << " = " << calc::subtract(x, y) << "\n";
    std::cout << x << " * " << y << " = " << calc::multiply(x, y) << "\n";
    std::cout << x << " / " << y << " = " << calc::divide(x, y) << "\n";

    // Thu nghiem bat loi chia cho 0
    std::cout << "\n=== Test chia cho 0 ===\n";
    try
    {
        std::cout << x << " / 0 = " << calc::divide(x, 0.0) << "\n";
    }
    catch (const std::exception &e)
    {
        std::cout << "[Bat loi thanh cong]: " << e.what() << "\n";
    }

    return 0;
}