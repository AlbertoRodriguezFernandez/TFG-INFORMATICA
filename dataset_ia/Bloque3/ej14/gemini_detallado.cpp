#include <iostream>
#include <new>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

/**
 * Crea un nuevo Nodo en el heap de forma segura.
 * 
 * @param valor El entero a almacenar en el nodo.
 * @return Puntero al nuevo Nodo o nullptr si la asignación falla.
 */
Nodo* crearNodo(int valor) {
    try {
        // Se utiliza el inicializador de llaves para garantizar la 
        // inicialización de todos los miembros.
        return new Nodo{valor, nullptr};
    } catch (const std::bad_alloc& e) {
        // En C++ moderno, si 'new' falla lanza una excepción. 
        // Capturamos para manejar el error y retornar un puntero nulo de forma segura.
        return nullptr;
    }
}
