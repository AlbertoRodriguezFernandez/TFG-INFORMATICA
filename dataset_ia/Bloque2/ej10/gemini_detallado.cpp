#include <vector>
#include <algorithm>

/**
 * @brief Elimina elementos duplicados de un vector in-place.
 * 
 * Utiliza el idioma estándar de C++ (sort + unique + erase) para procesar
 * el vector con una complejidad temporal de O(N log N) y espacial de O(1) 
 * (sin contar el stack de la ordenación).
 * 
 * @param vec Referencia al vector de enteros a procesar.
 */
void eliminarDuplicados(std::vector<int>& vec) {
    if (vec.empty()) {
        return;
    }

    // 1. Ordenar el vector para agrupar duplicados
    std::sort(vec.begin(), vec.end());

    // 2. Desplazar los elementos únicos al inicio del contenedor
    // std::unique devuelve un iterador al nuevo "final" lógico
    auto last = std::unique(vec.begin(), vec.end());

    // 3. Reducir el tamaño físico del vector para eliminar los elementos sobrantes
    vec.erase(last, vec.end());
}
