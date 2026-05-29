#include "lib/math_utils.h"

#include <cassert>
#include <iostream>
#include <stdexcept>

#define EXPECT_EQ(a, b) \
    do { \
        auto _a = (a); auto _b = (b); \
        if (_a != _b) { \
            std::cerr << __FILE__ << ":" << __LINE__ \
                      << " FAIL: " #a " == " #b \
                      << " (" << _a << " != " << _b << ")\n"; \
            return 1; \
        } \
        std::cout << "  PASS: " #a " == " #b "\n"; \
    } while (0)

#define EXPECT_THROW(expr, exc) \
    do { \
        bool _threw = false; \
        try { (expr); } catch (const exc&) { _threw = true; } \
        if (!_threw) { \
            std::cerr << __FILE__ << ":" << __LINE__ \
                      << " FAIL: " #expr " did not throw " #exc "\n"; \
            return 1; \
        } \
        std::cout << "  PASS: " #expr " throws " #exc "\n"; \
    } while (0)

int main() {
    std::cout << "=== math::add ===\n";
    EXPECT_EQ(math::add(2, 3), 5);
    EXPECT_EQ(math::add(-1, 1), 0);
    EXPECT_EQ(math::add(0, 0), 0);

    std::cout << "=== math::subtract ===\n";
    EXPECT_EQ(math::subtract(5, 3), 2);
    EXPECT_EQ(math::subtract(0, 5), -5);

    std::cout << "=== math::multiply ===\n";
    EXPECT_EQ(math::multiply(3, 4), 12);
    EXPECT_EQ(math::multiply(-2, 5), -10);
    EXPECT_EQ(math::multiply(0, 100), 0);

    std::cout << "=== math::factorial ===\n";
    EXPECT_EQ(math::factorial(0), 1);
    EXPECT_EQ(math::factorial(1), 1);
    EXPECT_EQ(math::factorial(5), 120);
    EXPECT_EQ(math::factorial(6), 720);
    EXPECT_THROW(math::factorial(-1), std::invalid_argument);
    EXPECT_THROW(math::divide(1.0, 0.0), std::invalid_argument);

    std::cout << "=== math::gcd ===\n";
    EXPECT_EQ(math::gcd(48, 18), 6);
    EXPECT_EQ(math::gcd(100, 75), 25);
    EXPECT_EQ(math::gcd(7, 13), 1);
    EXPECT_EQ(math::gcd(0, 5), 5);
    EXPECT_THROW(math::gcd(-1, 5), std::invalid_argument);

    std::cout << "\nAll tests passed.\n";
    return 0;
}
