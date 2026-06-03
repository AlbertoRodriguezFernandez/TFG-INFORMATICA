#include <gtest/gtest.h>
#include <string>
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

TEST(EstudianteTest, CalculoMediaNormal) {
    Estudiante e("Ana");
    e.agregarNota(8.0);
    e.agregarNota(10.0);
    e.agregarNota(6.0);
    EXPECT_DOUBLE_EQ(e.calcularMedia(), 8.0);
}

TEST(EstudianteTest, MediaSinNotas) {
    Estudiante e("Juan");
    EXPECT_DOUBLE_EQ(e.calcularMedia(), 0.0); // Comprobación de división por cero
}

TEST(EstudianteTest, NotaUnica) {
    Estudiante e("Luis");
    e.agregarNota(7.5);
    EXPECT_DOUBLE_EQ(e.calcularMedia(), 7.5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
