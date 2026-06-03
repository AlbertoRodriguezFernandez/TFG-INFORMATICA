#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("El factorial no está definido para números negativos");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
