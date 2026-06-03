#include <iostream>

int* crearArray(int n) {
    if (n <= 0) {
        return nullptr;
    }

    int* array = new int[n]();
    return array;
}
