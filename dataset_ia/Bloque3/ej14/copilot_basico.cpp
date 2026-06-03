#include <iostream>

struct Nodo {
    int dato;
    Nodo* siguiente;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;
    return nuevo;
}

