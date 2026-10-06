#include "calc/calculator.hpp"
#include "internal_math.hpp"
#include <stdexcept>

namespace calc
{
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0.0)
        {
            throw ::std::invalid_argument("Division by zero!");
        }

        return a / b;
    }

    bool check_prime(int n)
    {
        return internal_math::is_prime(n);
    }
}