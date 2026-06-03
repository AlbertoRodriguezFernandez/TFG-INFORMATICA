#include <unordered_map>
#include <stdexcept>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("El índice no puede ser negativo.");
    }

    static std::unordered_map<int, int> memo{{0, 0}, {1, 1}};

    if (auto it = memo.find(n); it != memo.end()) {
        return it->second;
    }

    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = result;
    return result;
}

