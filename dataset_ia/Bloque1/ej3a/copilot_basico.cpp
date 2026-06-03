#include <unordered_map>

int fibonacci(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1) return n;
    if (memo.count(n)) return memo[n];
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    std::unordered_map<int, int> memo;
    return fibonacci(n, memo);
}

