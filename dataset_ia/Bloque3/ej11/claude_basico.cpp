#include <cstring>

int* crearArray(int n) {
    if (n <= 0) return nullptr;
    int* arr = new int[n];
    std::memset(arr, 0, n * sizeof(int));
    return arr;
}
