#include <cstddef>

void liberarMatriz(int**& matriz, int filas) {
    if (matriz != nullptr) {
        for (int i = 0; i < filas; ++i) {
            delete[] matriz[i];
        }
        delete[] matriz;
        matriz = nullptr;
    }
}
