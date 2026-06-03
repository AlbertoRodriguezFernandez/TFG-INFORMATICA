#include <stdexcept>

int fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("Fibonacci is not defined for negative numbers");
    }
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}
