#include <vector>
#include <stdexcept>

/**
 * @brief Calcula el n-ésimo número de Fibonacci usando recursividad con memoización.
 * * Utiliza un vector estático para persistir los valores calculados entre llamadas,
 * optimizando la complejidad temporal a O(n). Se emplea std::vector para una
 * gestión de memoria segura y automática.
 * * @param n El índice del número de Fibonacci deseado (n >= 0).
 * @return El n-ésimo número de Fibonacci.
 * @throws std::invalid_argument Si n es negativo.
 */
int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("El índice no puede ser negativo.");
    }

    // El tipo long long o chequeos de desbordamiento serían ideales en entornos reales,
    // pero nos ceñimos a la firma int solicitada.
    static std::vector<int> memo = {0, 1};

    if (n < static_cast<int>(memo.size())) {
        return memo[n];
    }

    // Recursividad con almacenamiento de resultados
    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo.push_back(result);
    
    return result;
}
