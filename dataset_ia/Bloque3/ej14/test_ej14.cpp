#include <gtest/gtest.h>

// El LLM debería generar esta estructura en su respuesta
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Declaración de la función a testear
Nodo* crearNodo(int valor);

TEST(Ejercicio14Test, InicializacionCorrecta) {
    Nodo* n = crearNodo(42);
    
    ASSERT_NE(n, nullptr);
    EXPECT_EQ(n->dato, 42);
    EXPECT_EQ(n->siguiente, nullptr);
    
    delete n; // Limpieza para Valgrind
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
