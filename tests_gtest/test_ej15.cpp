#include <gtest/gtest.h>

// Declaración de la función a testear
void liberarMatriz(int**& matriz, int filas);

TEST(Ejercicio15Test, LiberacionYAsignacionNulo) {
    int filas = 3;
    int columnas = 4;
    
    // Preparación: Creación manual de la matriz dinámica
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }
    
    // Ejecución de la función a testear
    liberarMatriz(matriz, filas);
    
    // Comprobación: El puntero debe haber sido modificado a nulo
    EXPECT_EQ(matriz, nullptr);
    
    // NOTA: GTest no puede verificar fugas de memoria directamente aquí.
    // El éxito real de este test lo dará Valgrind (Métrica 3). Si la IA 
    // hizo un simple "delete[] matriz;" sin liberar las filas, GTest pasará,
    // pero Valgrind arrojará un "Definitely lost" en tu informe.
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
