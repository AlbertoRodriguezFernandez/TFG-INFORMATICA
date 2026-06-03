#include <stdexcept>
#include <cstdlib>
#include <algorithm>
#include <limits>

int mcd(int a, int b) {
    if (a == 0 && b == 0) {
        throw std::invalid_argument("mcd indefinido para a = 0 y b = 0");
    }

    if ((a == std::numeric_limits<int>::min() && b == 0) ||
        (b == std::numeric_limits<int>::min() && a == 0)) {
        throw std::overflow_error("Resultado fuera del rango de int");
    }

    long long x = std::llabs(static_cast<long long>(a));
    long long y = std::llabs(static_cast<long long>(b));

    while (y != 0) {
        long long temp = y;
        y = x % y;
        x = temp;
    }

    return static_cast<int>(x);
}
