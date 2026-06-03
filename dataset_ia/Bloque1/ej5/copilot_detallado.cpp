#include <stdexcept>
#include <limits>

int mcd(int a, int b) {
    if (a == 0 && b == 0) {
        throw std::invalid_argument("No existe MCD para (0, 0).");
    }

    a = std::abs(a);
    b = std::abs(b);

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

