#include <gtest/gtest.h>
int sumarDigitos(int n);

TEST(DigitosTest, SumaCorrecta) {
    EXPECT_EQ(sumarDigitos(0), 0);
    EXPECT_EQ(sumarDigitos(123), 6);
    EXPECT_EQ(sumarDigitos(9876), 30);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
