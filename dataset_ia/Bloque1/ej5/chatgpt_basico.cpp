#include <cstdlib>

int mcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}
