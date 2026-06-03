#include <iostream>

/**
 * @brief Libera la memoria de una matriz dinámica de enteros y anula el puntero.
 * 
 * @param matriz Referencia al puntero doble que apunta a la matriz.
 * @param filas Número de filas asignadas dinámicamente.
 */
void liberarMatriz(int**& matriz, int filas) {
    if (matriz == nullptr) {
        return;
    }

    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }

    delete[] matriz;
    matriz = nullptr;
}
