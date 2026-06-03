#include <gtest/gtest.h>
int mcd(int a, int b);

TEST(MCDTest, CalculoCorrecto) {
    EXPECT_EQ(mcd(48, 18), 6);
    EXPECT_EQ(mcd(101, 10), 1);
    EXPECT_EQ(mcd(27, 9), 9);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
