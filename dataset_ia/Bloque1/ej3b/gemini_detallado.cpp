#include <stdexcept>
#include <limits>

/**
 * @brief Calcula el n-ésimo número de la serie de Fibonacci usando recursividad simple.
 * * @param n El índice en la serie de Fibonacci (basado en 0, donde fib(0)=0, fib(1)=1).
 * @return El n-ésimo número de Fibonacci.
 * @throws std::invalid_argument Si n es negativo.
 * @throws std::overflow_error Si se detecta un desbordamiento de entero.
 */
int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("El indice n no puede ser negativo.");
    }
    
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);

    // Control de desbordamiento (Overflow) antes de realizar la suma
    if (a > std::numeric_limits<int>::max() - b) {
        throw std::overflow_error("Desbordamiento de entero detectado al calcular Fibonacci.");
    }

    return a + b;
}
