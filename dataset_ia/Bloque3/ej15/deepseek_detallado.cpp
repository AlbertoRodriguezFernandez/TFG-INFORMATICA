#include <cstddef>

void liberarMatriz(int**& matriz, int filas) {
    if (matriz == nullptr) {
        return;
    }
    
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
        matriz[i] = nullptr;
    }
    
    delete[] matriz;
    matriz = nullptr;
}
