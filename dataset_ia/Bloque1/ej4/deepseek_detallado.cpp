#include <cstdlib>

int sumarDigitos(int n) {
    int suma = 0;
    n = std::abs(n);
    
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    
    return suma;
}
