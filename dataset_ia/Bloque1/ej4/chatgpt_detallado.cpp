#include <cstdlib>

int sumarDigitos(int n) {
    long long valor = std::llabs(static_cast<long long>(n));
    int suma = 0;

    while (valor > 0) {
        suma += static_cast<int>(valor % 10);
        valor /= 10;
    }

    return suma;
}
