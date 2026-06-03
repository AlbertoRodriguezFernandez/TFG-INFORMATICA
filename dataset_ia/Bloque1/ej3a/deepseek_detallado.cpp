#include <unordered_map>
#include <stdexcept>

class FibonacciMemo {
private:
    std::unordered_map<int, int> memo;
    
public:
    int fibonacci(int n) {
        if (n < 0) {
            throw std::invalid_argument("Input must be non-negative");
        }
        
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
};

int fibonacci(int n) {
    static FibonacciMemo memoizer;
    return memoizer.fibonacci(n);
}
