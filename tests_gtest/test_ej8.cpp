#include <gtest/gtest.h>
#include <string>
#include <map>

std::map<char, int> contarFrecuencias(const std::string& texto);

TEST(FrecuenciasTest, CasosBase) {
    auto freq = contarFrecuencias("banana");
    EXPECT_EQ(freq['b'], 1);
    EXPECT_EQ(freq['a'], 3);
    EXPECT_EQ(freq['n'], 2);
    
    auto freqVacia = contarFrecuencias("");
    EXPECT_TRUE(freqVacia.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
