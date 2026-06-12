#include <stdexcept>
#include <vector>

// Calcula el n-ésimo número de Fibonacci de forma óptima y segura.
// Complejidad temporal: O(n), Complejidad espacial: O(1)
int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("El índice no puede ser negativo.");
    }
    
    // El máximo n-ésimo número de Fibonacci que cabe en un int de 32 bits firmado es n = 46
    if (n > 46) {
        throw std::overflow_error("Desbordamiento de entero: el resultado excede el límite de 'int'.");
    }

    if (n == 0) return 0;
    if (n == 1) return 1;

    int previo = 0;
    int actual = 1;

    for (int i = 2; i <= n; ++i) {
        int siguiente = previo + actual;
        previo = actual;
        actual = siguiente;
    }

    return actual;
}
