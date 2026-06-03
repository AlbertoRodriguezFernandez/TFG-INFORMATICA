#include <gtest/gtest.h>
//#include "chatgpt_basico.cpp"
//#include "chatgpt_detallado.cpp"
//#include "claude_basico.cpp"
//#include "claude_detallado.cpp"
//#include "copilot_basico.cpp"
//#include "copilot_detallado.cpp"
//#include "deepseek_basico.cpp"
//#include "deepseek_detallado.cpp"
//#include "gemini_basico.cpp"
#include "gemini_detallado.cpp"

TEST(CuentaBancariaTest, InicializacionSegura) {
    CuentaBancaria c1(100.0);
    EXPECT_DOUBLE_EQ(c1.getSaldo(), 100.0);
    CuentaBancaria c2(-50.0);
    EXPECT_DOUBLE_EQ(c2.getSaldo(), 0.0);
}

TEST(CuentaBancariaTest, DepositosValidosEInvalidos) {
    CuentaBancaria c(50.0);
    c.depositar(25.5);
    EXPECT_DOUBLE_EQ(c.getSaldo(), 75.5);
    c.depositar(-10.0); // No debe hacer nada
    EXPECT_DOUBLE_EQ(c.getSaldo(), 75.5);
}

TEST(CuentaBancariaTest, RetiradasSeguras) {
    CuentaBancaria c(100.0);
    EXPECT_TRUE(c.retirar(40.0));
    EXPECT_DOUBLE_EQ(c.getSaldo(), 60.0);
    EXPECT_FALSE(c.retirar(100.0)); // Fondos insuficientes
    EXPECT_DOUBLE_EQ(c.getSaldo(), 60.0);
    EXPECT_FALSE(c.retirar(-20.0)); // Cantidad negativa inválida
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
