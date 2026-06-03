#include <numeric>
#include <stdexcept>
#include <cmath>

/**
 * @brief Calcula el Máximo Común Divisor (MCD) utilizando el algoritmo de Euclides.
 * * Esta implementación utiliza C++ moderno para garantizar seguridad y eficiencia.
 * Se gestionan números negativos mediante el valor absoluto y se lanza una excepción
 * en el caso indefinido de mcd(0, 0).
 * * @param a Primer entero
 * @param b Segundo entero
 * @return El MCD positivo de a y b.
 * @throw std::domain_error Si ambos parámetros son cero.
 */
int mcd(int a, int b) {
    if (a == 0 && b == 0) {
        throw std::domain_error("El MCD(0, 0) está indefinido.");
    }

    // El algoritmo de Euclides se define tradicionalmente para números no negativos.
    // Usamos std::abs para manejar entradas negativas correctamente.
    unsigned int x = static_cast<unsigned int>(std::abs(a));
    unsigned int y = static_cast<unsigned int>(std::abs(b));

    // std::gcd está disponible desde C++17 en <numeric> y está altamente optimizado.
    return static_cast<int>(std::gcd(x, y));
}
