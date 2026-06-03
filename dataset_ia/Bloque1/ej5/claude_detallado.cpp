#include <stdexcept>
#include <cstdlib>

[[nodiscard]] int mcd(int a, int b) {
    if (a < 0) a = std::abs(a);
    if (b < 0) b = std::abs(b);

    if (a == 0 && b == 0) {
        throw std::invalid_argument("mcd(0, 0) is undefined");
    }

    while (b != 0) {
        a = std::exchange(b, a % b);
    }

    return a;
}
