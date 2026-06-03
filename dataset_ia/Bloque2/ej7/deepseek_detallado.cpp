#include <stdexcept>
#include <limits>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo) {
    if (arr == nullptr || size <= 0) {
        throw std::invalid_argument("El array no puede ser nulo y el tamaño debe ser mayor que 0");
    }
    
    maximo = arr[0];
    minimo = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
}
