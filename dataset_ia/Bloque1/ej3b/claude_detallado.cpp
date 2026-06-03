#include <stdexcept>
#include <limits>

[[nodiscard]] int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("fibonacci: n must be non-negative, got " + std::to_string(n));
    }

    if (n > 46) {
        throw std::overflow_error("fibonacci: n=" + std::to_string(n) + " exceeds int range (max safe n=46)");
    }

    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
