#include <cmath>

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    if (n <= 3) {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    const int limite = static_cast<int>(std::sqrt(n));
    for (int i = 5; i <= limite; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
