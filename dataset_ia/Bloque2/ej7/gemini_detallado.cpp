#include <limits>
#include <algorithm>
#include <stdexcept>

/**
 * @brief Encuentra los valores máximo y mínimo en un array de estilo C.
 * 
 * @param arr Puntero al array de enteros.
 * @param size Tamaño del array.
 * @param maximo Referencia donde se almacenará el valor máximo.
 * @param minimo Referencia donde se almacenará el valor mínimo.
 * @throws std::invalid_argument si el puntero es nulo o el tamaño es menor o igual a 0.
 */
void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo) {
    if (arr == nullptr) {
        throw std::invalid_argument("El puntero al array no puede ser nulo.");
    }

    if (size <= 0) {
        throw std::invalid_argument("El tamaño del array debe ser mayor que cero.");
    }

    // Inicializamos con el primer elemento para reducir comparaciones innecesarias
    maximo = arr[0];
    minimo = arr[0];

    // Optimizamos el recorrido empezando desde el segundo elemento
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        } else if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
}
