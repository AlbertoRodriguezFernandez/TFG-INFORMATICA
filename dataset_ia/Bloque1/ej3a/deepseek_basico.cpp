#include <vector>

int fibonacci(int n) {
    static std::vector<int> memo(31, -1);
    
    if (n <= 1) {
        return n;
    }
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}
