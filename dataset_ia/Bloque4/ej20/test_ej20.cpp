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

TEST(TermostatoTest, ConstructorLimitesSeguros) {
    Termostato t1(20.0, 15.0, 25.0); // Rango normal
    EXPECT_DOUBLE_EQ(t1.getTemperaturaActual(), 20.0);
    
    Termostato t2(10.0, 15.0, 25.0); // Por debajo del mínimo
    EXPECT_DOUBLE_EQ(t2.getTemperaturaActual(), 15.0);
    
    Termostato t3(30.0, 15.0, 25.0); // Por encima del máximo
    EXPECT_DOUBLE_EQ(t3.getTemperaturaActual(), 25.0);
}

TEST(TermostatoTest, SubirTemperaturaConTope) {
    Termostato t(20.0, 15.0, 25.0);
    t.subirTemperatura(3.0);
    EXPECT_DOUBLE_EQ(t.getTemperaturaActual(), 23.0);
    t.subirTemperatura(10.0); // Intenta pasar de 25
    EXPECT_DOUBLE_EQ(t.getTemperaturaActual(), 25.0);
}

TEST(TermostatoTest, BajarTemperaturaConFondo) {
    Termostato t(20.0, 15.0, 25.0);
    t.bajarTemperatura(4.0);
    EXPECT_DOUBLE_EQ(t.getTemperaturaActual(), 16.0);
    t.bajarTemperatura(5.0); // Intenta bajar de 15
    EXPECT_DOUBLE_EQ(t.getTemperaturaActual(), 15.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
