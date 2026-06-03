#include <algorithm>

void invertirArray(int* arr, int size) {
    int* izq = arr;
    int* der = arr + size - 1;
    while (izq < der) {
        std::swap(*izq, *der);
        ++izq;
        --der;
    }
}
