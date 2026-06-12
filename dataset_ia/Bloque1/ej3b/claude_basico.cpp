#include <stdexcept>

int fibonacci(int n) {
    if (n < 0) throw std::invalid_argument("n debe ser >= 0");
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
