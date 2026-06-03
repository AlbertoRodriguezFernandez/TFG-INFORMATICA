#include <gtest/gtest.h>
int factorial(int n);

TEST(FactorialTest, PositivosYNegativos) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(5), 120);
    try {
        int res = factorial(-5);
        EXPECT_LE(res, 0); // Si no lanza excepción, debe devolver error
    } catch (...) {
        SUCCEED(); // Lanza excepción (correcto)
    }
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
