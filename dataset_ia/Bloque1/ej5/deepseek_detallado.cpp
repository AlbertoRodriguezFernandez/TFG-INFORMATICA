#include <cstdlib>

int mcd(int a, int b) {
    // Handle negative numbers by using absolute values
    a = std::abs(a);
    b = std::abs(b);
    
    // Euclid's algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}
