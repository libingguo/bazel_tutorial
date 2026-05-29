#include <iostream>
#include "lib/math_utils.h"

int main() {
    std::cout << "Hello, World!\n\n";

    std::cout << "add(3, 4)       = " << math::add(3, 4) << "\n";
    std::cout << "subtract(10, 3) = " << math::subtract(10, 3) << "\n";
    std::cout << "multiply(6, 7)  = " << math::multiply(6, 7) << "\n";
    std::cout << "divide(22, 7)   = " << math::divide(22, 7) << "\n";
    std::cout << "factorial(5)    = " << math::factorial(5) << "\n";
    std::cout << "gcd(48, 18)     = " << math::gcd(48, 18) << "\n";

    return 0;
}
