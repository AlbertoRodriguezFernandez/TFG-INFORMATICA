#include <cstdlib>

int sumarDigitos(int n) {
    n = std::abs(n);
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}
