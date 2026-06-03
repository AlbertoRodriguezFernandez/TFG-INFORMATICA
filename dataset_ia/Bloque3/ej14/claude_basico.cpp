#include <iostream>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr;
    return nuevoNodo;
}
