#include <new>

/**
 * Asigna dinámicamente un array de n enteros inicializados a cero.
 * Utiliza el operador new[] con inicialización de valor () para asegurar
 * que todos los elementos se establezcan en 0.
 */
int* crearArray(int n) {
    if (n <= 0) {
        return nullptr;
    }

    try {
        // El uso de () invoca la inicialización por valor (value-initialization),
        // lo que garantiza que los enteros se inicialicen en cero.
        return new int[n]();
    } catch (const std::bad_alloc&) {
        // En un entorno de producción, aquí se podría registrar el error de memoria.
        return nullptr;
    }
}
