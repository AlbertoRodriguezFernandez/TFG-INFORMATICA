#include <stdexcept>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo) {
    if (arr == nullptr || size <= 0) {
        throw std::invalid_argument("Array inválido o tamaño no válido");
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
