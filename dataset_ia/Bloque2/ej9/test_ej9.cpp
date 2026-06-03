#include <gtest/gtest.h>
#include <string>

bool esPalindromo(const std::string& texto);

TEST(PalindromoTest, CasosBase) {
    EXPECT_TRUE(esPalindromo("reconocer"));
    EXPECT_TRUE(esPalindromo("Anita lava la tina")); // Ignora espacios y mayúsculas
    EXPECT_FALSE(esPalindromo("hola mundo"));
    EXPECT_TRUE(esPalindromo("")); // Cadena vacía es técnicamente un palíndromo
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
