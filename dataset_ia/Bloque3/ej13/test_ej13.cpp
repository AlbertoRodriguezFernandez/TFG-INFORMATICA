#include <gtest/gtest.h>

// Declaración de la función a testear
void invertirArray(int* arr, int size);

TEST(Ejercicio13Test, ArrayPar) {
    int arr[] = {1, 2, 3, 4};
    int esperado[] = {4, 3, 2, 1};
    invertirArray(arr, 4);
    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(arr[i], esperado[i]);
    }
}

TEST(Ejercicio13Test, ArrayImpar) {
    int arr[] = {10, 20, 30, 40, 50};
    int esperado[] = {50, 40, 30, 20, 10};
    invertirArray(arr, 5);
    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(arr[i], esperado[i]);
    }
}

TEST(Ejercicio13Test, ArrayUnElementoYVacio) {
    int arr1[] = {99};
    invertirArray(arr1, 1);
    EXPECT_EQ(arr1[0], 99);

    int* arrVacio = nullptr;
    // Si la función está bien hecha, no debería dar segfault al pasar size 0
    EXPECT_NO_FATAL_FAILURE(invertirArray(arrVacio, 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
