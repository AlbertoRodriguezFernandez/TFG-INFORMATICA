#include <cstdlib>

int sumarDigitos(int n) {
    n = std::abs(n); // Maneja números negativos

    int suma = 0;
    while (n > 0) {
        suma += n % 10; // Extrae el último dígito
        n /= 10;        // Elimina el último dígito
    }

    return suma;
}
