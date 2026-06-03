#include <cmath>

/**
 * @brief Determina si un número entero positivo es primo de forma eficiente.
 * * Implementa una optimización por división por tentativa (trial division) 
 * eliminando múltiplos de 2 y 3, reduciendo el espacio de búsqueda 
 * a la forma 6k ± 1.
 * * @param n El número entero a evaluar.
 * @return true si n es primo, false en caso contrario.
 */
bool esPrimo(int n) noexcept {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Se utiliza la raíz cuadrada como límite superior por eficiencia O(sqrt(n))
    const int limite = static_cast<int>(std::sqrt(n));
    
    // Incremento de 6 para evaluar solo números de la forma 6k +/- 1
    for (int i = 5; i <= limite; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
