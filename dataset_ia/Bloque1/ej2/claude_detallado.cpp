#include <cmath>
#include <stdexcept>

[[nodiscard]] bool esPrimo(int n) {
    if (n < 0) {
        throw std::invalid_argument("El número debe ser un entero positivo.");
    }

    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    if (n == 3) return true;
    if (n % 3 == 0) return false;

    const int raiz = static_cast<int>(std::sqrt(static_cast<double>(n)));

    for (int i = 5; i <= raiz; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
