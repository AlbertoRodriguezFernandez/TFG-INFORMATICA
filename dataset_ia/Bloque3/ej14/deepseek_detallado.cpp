#include <cstdlib>
#include <new>

struct Nodo {
    int dato;
    Nodo* siguiente;
    
    Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

Nodo* crearNodo(int valor) noexcept {
    try {
        Nodo* nuevoNodo = new Nodo(valor);
        return nuevoNodo;
    } catch (const std::bad_alloc&) {
        return nullptr;
    }
}
