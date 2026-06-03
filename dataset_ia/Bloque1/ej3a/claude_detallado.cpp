#include <iostream>
#include <unordered_map>
#include <stdexcept>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("n must be a non-negative integer");
    }
    
    static std::unordered_map<int, int> memo;
    
    if (n <= 1) {
        return n;
    }
    
    auto it = memo.find(n);
    if (it != memo.end()) {
        return it->second;
    }
    
    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = result;
    
    return result;
}
