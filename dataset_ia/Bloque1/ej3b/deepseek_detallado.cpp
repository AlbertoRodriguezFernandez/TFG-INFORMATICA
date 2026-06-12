#include <stdexcept>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("Fibonacci is not defined for negative integers");
    }
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int prev2 = 0;
    int prev1 = 1;
    int current = 0;
    
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}
