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


TEST(RectanguloTest, CalculoArea) {
    Rectangulo r(5.0, 3.0);
    EXPECT_DOUBLE_EQ(r.calcularArea(), 15.0);
}

TEST(RectanguloTest, CalculoPerimetro) {
    Rectangulo r(5.0, 3.0);
    EXPECT_DOUBLE_EQ(r.calcularPerimetro(), 16.0);
}

TEST(RectanguloTest, ModificacionSetters) {
    Rectangulo r(2.0, 2.0);
    r.setBase(4.0);
    r.setAltura(6.0);
    EXPECT_DOUBLE_EQ(r.calcularArea(), 24.0);
    EXPECT_DOUBLE_EQ(r.calcularPerimetro(), 20.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
