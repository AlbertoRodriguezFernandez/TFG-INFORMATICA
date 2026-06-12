#include <stdexcept>
#include <vector>
#include <limits>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("n must be non-negative");
    }
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Check for potential overflow (Fibonacci grows exponentially)
    // F(46) = 1836311903 which is within int range
    // F(47) = 2971215073 which overflows int
    constexpr int MAX_FIBONACCI_INDEX = 46;
    if (n > MAX_FIBONACCI_INDEX) {
        throw std::overflow_error("Fibonacci number too large for int type");
    }
    
    // Iterative approach: O(n) time, O(1) space
    int prev = 0;
    int curr = 1;
    
    for (int i = 2; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return curr;
}
