#include <iostream>
#include <unordered_map>

int fibonacci(int n) {
    static std::unordered_map<int, int> memo;
    
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    auto it = memo.find(n);
    if (it != memo.end()) {
        return it->second;
    }
    
    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = result;
    
    return result;
}
