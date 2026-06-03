#include <iostream>

void liberarMatriz(int**& matriz, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    matriz = nullptr;
}
