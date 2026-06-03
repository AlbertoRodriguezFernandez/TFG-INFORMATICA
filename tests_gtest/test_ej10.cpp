#include <gtest/gtest.h>
#include <vector>

void eliminarDuplicados(std::vector<int>& vec);

TEST(EliminarDuplicadosTest, CasosBase) {
    std::vector<int> vec1 = {1, 2, 2, 3, 4, 4, 4, 5};
    eliminarDuplicados(vec1);
    std::vector<int> esperado1 = {1, 2, 3, 4, 5};
    EXPECT_EQ(vec1, esperado1);

    std::vector<int> vec2 = {7, 7, 7};
    eliminarDuplicados(vec2);
    std::vector<int> esperado2 = {7};
    EXPECT_EQ(vec2, esperado2);

    std::vector<int> vecVacio;
    eliminarDuplicados(vecVacio);
    EXPECT_TRUE(vecVacio.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
