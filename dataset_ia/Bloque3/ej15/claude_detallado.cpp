#include <stdexcept>

void liberarMatriz(int**& matriz, int filas) {
    if (matriz == nullptr) {
        return;
    }

    if (filas < 0) {
        throw std::invalid_argument("El número de filas no puede ser negativo.");
    }

    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
        matriz[i] = nullptr;
    }

    delete[] matriz;
    matriz = nullptr;
}
