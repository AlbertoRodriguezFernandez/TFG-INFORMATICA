#include <gtest/gtest.h>
#include <string>

std::string invertirCadena(const std::string& texto);

TEST(InvertirCadenaTest, CasosBase) {
    EXPECT_EQ(invertirCadena("hola"), "aloh");
    EXPECT_EQ(invertirCadena(""), "");
    EXPECT_EQ(invertirCadena("a"), "a");
    EXPECT_EQ(invertirCadena("TFG"), "GFT");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
