#include "lib/math_utils.h"

#include <stdexcept>

namespace math {

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

double divide(double a, double b) {
    if (b == 0.0) throw std::invalid_argument("division by zero");
    return a / b;
}

int factorial(int n) {
    if (n < 0) throw std::invalid_argument("negative input");
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int gcd(int a, int b) {
    if (a < 0 || b < 0) throw std::invalid_argument("negative input");
    while (b) { a %= b; std::swap(a, b); }
    return a;
}

}  // namespace math
