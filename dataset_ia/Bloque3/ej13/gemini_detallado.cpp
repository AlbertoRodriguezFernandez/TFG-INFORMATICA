#include <algorithm> // Para std::iter_swap
#include <cstddef>   // Para std::size_t

/**
 * Invierte un array de enteros in-place utilizando aritmética de punteros.
 * 
 * @param arr Puntero al inicio del array.
 * @param size Tamaño del array.
 */
void invertirArray(int* arr, int size) {
    if (arr == nullptr || size <= 1) {
        return;
    }

    int* start = arr;
    int* end = arr + (size - 1);

    while (start < end) {
        // Intercambio de valores usando std::iter_swap (equivalente a swap manual de desreferencia)
        // Se evita la notación de corchetes según el requerimiento.
        std::iter_swap(start, end);

        // Aritmética de punteros para avanzar hacia el centro
        start++;
        end--;
    }
}
