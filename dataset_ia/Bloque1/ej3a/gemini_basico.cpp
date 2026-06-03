#include <vector>

int fibonacci_helper(int n, std::vector<int>& memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibonacci_helper(n - 1, memo) + fibonacci_helper(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    std::vector<int> memo(n + 1, -1);
    return fibonacci_helper(n, memo);
}
