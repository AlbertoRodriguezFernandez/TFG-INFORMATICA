#include <cstdlib>
#include <stdexcept>

int sumarDigitos(int n) {
    if (n == INT_MIN) {
        throw std::overflow_error("Valor fuera de rango para conversión segura");
    }

    long long num = std::abs(static_cast<long long>(n));
    int suma = 0;

    while (num > 0) {
        suma += static_cast<int>(num % 10);
        num /= 10;
    }

    return suma;
}
