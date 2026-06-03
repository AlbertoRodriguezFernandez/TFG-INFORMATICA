#include <stdexcept>
#include <algorithm>

void invertirArray(int* arr, int size) {
    if (arr == nullptr) {
        throw std::invalid_argument("El puntero al array no puede ser nulo.");
    }
    if (size < 0) {
        throw std::invalid_argument("El tamaño del array no puede ser negativo.");
    }
    if (size <= 1) {
        return;
    }

    int* inicio = arr;
    int* fin    = arr + (size - 1);

    while (inicio < fin) {
        std::iter_swap(inicio, fin);
        ++inicio;
        --fin;
    }
}
