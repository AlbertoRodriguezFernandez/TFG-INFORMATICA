#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial of a negative number is undefined.");
    }
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
