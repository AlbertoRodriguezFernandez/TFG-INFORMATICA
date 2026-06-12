#include <stdexcept>
#include <limits>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("El índice no puede ser negativo.");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0;
    int curr = 1;

    for (int i = 2; i <= n; ++i) {
        if (curr > std::numeric_limits<int>::max() - prev) {
            throw std::overflow_error("Desbordamiento de entero en la serie de Fibonacci.");
        }
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

