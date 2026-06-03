#include <cstddef>

int* crearArray(int n) {
    if (n <= 0) {
        return nullptr;
    }
    return new int[n]();
}
