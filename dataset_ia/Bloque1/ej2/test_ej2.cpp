#include <gtest/gtest.h>
bool esPrimo(int n);

TEST(PrimosTest, CasosBase) {
    EXPECT_FALSE(esPrimo(0));
    EXPECT_FALSE(esPrimo(1));
    EXPECT_TRUE(esPrimo(2));
    EXPECT_TRUE(esPrimo(17));
    EXPECT_FALSE(esPrimo(100));
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
