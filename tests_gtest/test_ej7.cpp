#include <gtest/gtest.h>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo);

TEST(MaxMinTest, CasosBase) {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, -6, 5};
    int max = 0, min = 0;
    
    encontrarMaxMin(arr, 9, max, min);
    
    EXPECT_EQ(max, 9);
    EXPECT_EQ(min, -6);
}

TEST(MaxMinTest, UnSoloElemento) {
    int arr[] = {42};
    int max = 0, min = 0;
    
    encontrarMaxMin(arr, 1, max, min);
    
    EXPECT_EQ(max, 42);
    EXPECT_EQ(min, 42);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
