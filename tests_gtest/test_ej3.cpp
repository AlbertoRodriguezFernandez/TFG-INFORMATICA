#include <gtest/gtest.h>
int fibonacci(int n);

TEST(FibonacciTest, CasosRapidos) {
    EXPECT_EQ(fibonacci(0), 0);
    EXPECT_EQ(fibonacci(1), 1);
    EXPECT_EQ(fibonacci(10), 55);
    EXPECT_EQ(fibonacci(30), 832040);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
