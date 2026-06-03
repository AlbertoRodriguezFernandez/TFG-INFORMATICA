#include <new>
#include <stdexcept>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevoNodo = new (std::nothrow) Nodo{valor, nullptr};

    if (nuevoNodo == nullptr) {
        throw std::bad_alloc();
    }

    return nuevoNodo;
}
