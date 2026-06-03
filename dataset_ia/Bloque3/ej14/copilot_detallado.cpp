#include <memory>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

inline Nodo* crearNodo(int valor) {
    auto* nodo = new(std::nothrow) Nodo{};
    if (!nodo) {
        throw std::bad_alloc{};
    }
    nodo->dato = valor;
    nodo->siguiente = nullptr;
    return nodo;
}

