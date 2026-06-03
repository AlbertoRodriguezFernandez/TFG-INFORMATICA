#include <gtest/gtest.h>

// Declaración de la función a testear
char* concatenarCadenas(const char* str1, const char* str2);

TEST(Ejercicio12Test, ConcatenacionBasica) {
    const char* s1 = "Hola, ";
    const char* s2 = "Mundo!";
    char* resultado = concatenarCadenas(s1, s2);
    
    ASSERT_NE(resultado, nullptr);
    EXPECT_STREQ(resultado, "Hola, Mundo!");
    
    delete[] resultado; // Limpieza para Valgrind
}

TEST(Ejercicio12Test, CadenasVacias) {
    char* res1 = concatenarCadenas("", "Test");
    EXPECT_STREQ(res1, "Test");
    delete[] res1;

    char* res2 = concatenarCadenas("Test", "");
    EXPECT_STREQ(res2, "Test");
    delete[] res2;

    char* res3 = concatenarCadenas("", "");
    EXPECT_STREQ(res3, "");
    delete[] res3;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
