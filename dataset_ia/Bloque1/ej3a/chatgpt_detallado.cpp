#include <unordered_map>
#include <stdexcept>
#include <limits>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("n must be non-negative");
    }

    static std::unordered_map<int, int> memo{{0, 0}, {1, 1}};

    auto it = memo.find(n);
    if (it != memo.end()) {
        return it->second;
    }

    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);

    if (std::numeric_limits<int>::max() - a < b) {
        throw std::overflow_error("Integer overflow in Fibonacci calculation");
    }

    int result = a + b;
    memo[n] = result;

    return result;
}
