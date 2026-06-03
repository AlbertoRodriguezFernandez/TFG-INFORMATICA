#include <gtest/gtest.h>

// Declaración de la función a testear
int* crearArray(int n);

TEST(Ejercicio11Test, TamanoPositivo) {
    int n = 5;
    int* arr = crearArray(n);
    ASSERT_NE(arr, nullptr); // Verifica que no sea nulo
    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(arr[i], 0); // Verifica inicialización
    }
    delete[] arr; // Crucial para que Valgrind no marque falso positivo en el test
}

TEST(Ejercicio11Test, TamanoCeroONegativo) {
    EXPECT_EQ(crearArray(0), nullptr);
    EXPECT_EQ(crearArray(-5), nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
