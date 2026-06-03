#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("El número no puede ser negativo");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

