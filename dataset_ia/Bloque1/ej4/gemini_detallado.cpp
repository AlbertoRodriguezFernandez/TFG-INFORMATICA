#include <cmath>
#include <limits>

/**
 * @brief Calcula la suma de los dígitos de un número entero.
 * * Utiliza C++ moderno para garantizar seguridad contra desbordamientos 
 * y maneja correctamente valores negativos.
 * * @param n El número entero a procesar.
 * @return La suma de los dígitos individuales.
 */
int sumarDigitos(int n) noexcept {
    // Manejo del valor absoluto evitando el comportamiento indefinido de abs(INT_MIN)
    // Se utiliza un acumulador de tipo long long para prevenir desbordamientos intermedios
    long long numero = static_cast<long long>(n);
    if (numero < 0) {
        numero = -numero;
    }

    int suma = 0;
    while (numero > 0) {
        suma += static_cast<int>(numero % 10);
        numero /= 10;
    }

    return suma;
}
