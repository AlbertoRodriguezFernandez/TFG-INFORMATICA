#include <stdexcept>
#include <limits>

[[nodiscard]] int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("factorial is not defined for negative numbers");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n > 12) {
        throw std::overflow_error("factorial result exceeds int range for n > 12");
    }
    return n * factorial(n - 1);
}
