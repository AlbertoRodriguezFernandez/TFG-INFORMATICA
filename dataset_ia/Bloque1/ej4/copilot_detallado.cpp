#include <cstdlib>
#include <limits>

int sumarDigitos(int n) {
    // Manejo seguro ante posibles desbordamientos al usar valor absoluto
    if (n == std::numeric_limits<int>::min()) {
        // Caso especial: abs(INT_MIN) es indefinido, se trata manualmente
        // INT_MIN = -2147483648 → suma de dígitos = 2+1+4+7+4+8+3+6+4+8 = 47
        return 47;
    }

    n = std::abs(n);
    int suma = 0;

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}

