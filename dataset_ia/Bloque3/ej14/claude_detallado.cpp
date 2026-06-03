#include <memory>
#include <stdexcept>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

[[nodiscard]] Nodo* crearNodo(int valor) {
    // std::make_unique garantiza que no haya fuga si ocurre una excepción
    auto nodo = std::make_unique<Nodo>();

    nodo->dato      = valor;
    nodo->siguiente = nullptr;

    return nodo.release(); // transfiere la propiedad al llamador
}
