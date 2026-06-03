#include <utility>

void invertirArray(int* arr, int size) {
    int* inicio = arr;
    int* fin = arr + size - 1;

    while (inicio < fin) {
        std::swap(*inicio, *fin);
        ++inicio;
        --fin;
    }
}
