#include <gtest/gtest.h>
#include <cmath>
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

TEST(Punto2DTest, InicializacionPorDefecto) {
    Punto2D p;
    EXPECT_DOUBLE_EQ(p.getX(), 0.0);
    EXPECT_DOUBLE_EQ(p.getY(), 0.0);
}

TEST(Punto2DTest, DistanciaMismoPunto) {
    Punto2D p1(5.0, 5.0);
    Punto2D p2(5.0, 5.0);
    EXPECT_DOUBLE_EQ(p1.calcularDistancia(p2), 0.0);
}

TEST(Punto2DTest, DistanciaEuclidianaClasica) {
    Punto2D p1(0.0, 0.0);
    Punto2D p2(3.0, 4.0);
    // Triángulo rectángulo 3-4-5
    EXPECT_DOUBLE_EQ(p1.calcularDistancia(p2), 5.0); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
