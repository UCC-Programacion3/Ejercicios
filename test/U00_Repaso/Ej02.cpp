#include <type_traits>

#include "../../U00_Repaso/Ej-02/Calculadora.h"
#include "gtest/gtest.h"

/*
TEST(U00_Ej02_test, sumarInt) {
    std::is_member_function_pointer<decltype(&Calculadora::sumar)>::value;
    Calculadora<int> m_calc;
    EXPECT_EQ(m_calc.sumar(1, 1), 2) << "Error al sumar: 1 + 1";
    EXPECT_EQ(m_calc.sumar(-1, 1), 0) << "Error al sumar: -1 + 1";
}
TEST(U00_Ej02_test, sumarFloat) {
    Calculadora<float> m_calc;
    EXPECT_FLOAT_EQ(m_calc.sumar(1.0, 1.0), 2.0) << "Error al sumar: 1.0 + 1.0";
    EXPECT_FLOAT_EQ(m_calc.sumar(-1.0, 1.0), 0.0) << "Error al sumar: -1.0
+ 1.0";
}

TEST(U00_Ej02_test, restarInt) {
    Calculadora<int> m_calc;
    EXPECT_EQ(m_calc.restar(1, 1), 0) << "Error al restar: -1 - 1";
    EXPECT_EQ(m_calc.restar(-1, 1), -2) << "Error al restar: -1 - 1";
}

TEST(U00_Ej02_test, restarFloat) {
    Calculadora<float> m_calc;
    EXPECT_FLOAT_EQ(m_calc.restar(1.0, 1.0), 0.0) << "Error al restar: -1.0
- 1.0"; EXPECT_FLOAT_EQ(m_calc.restar(-1.0, 1.0), -2.0) << "Error al restar:
-1.0 - 1.0";
}

TEST(U00_Ej02_test, multiplicarInt) {
    Calculadora<int> m_calc;
    EXPECT_EQ(m_calc.multiplicar(2, 3), 6) << "Error al multiplicar: 2 x 3";
    EXPECT_EQ(m_calc.multiplicar(-1, 1), -1) << "Error al multiplicar: -1 x 1";
}

TEST(U00_Ej02_test, multiplicarFloat) {
    Calculadora<float> m_calc;
    EXPECT_FLOAT_EQ(m_calc.multiplicar(2.0, 3.0), 6.0) << "Error al
multiplicar: 2.0 x 3.0"; EXPECT_FLOAT_EQ(m_calc.multiplicar(-1.0, 1.0), -1.0) <<
"Error al multiplicar: -1.0 x 1.0";
}


TEST(U00_Ej02_test, dividirInt) {
    Calculadora<int> m_calc;
    EXPECT_EQ(m_calc.dividir(1, 1), 1) << "Error al dividir: 1 / 1";
    EXPECT_EQ(m_calc.dividir(3, 2), 1) << "Error al dividir: 3 / 2 (int)";
}

TEST(U00_Ej02_test, dividirFloat) {
    Calculadora<float> m_calc;
    EXPECT_FLOAT_EQ(m_calc.dividir(1.0, 1.0), 1.0) << "Error al dividir: 1.0
/ 1.0"; EXPECT_FLOAT_EQ(m_calc.dividir(3.0, 2.0), 1.5) << "Error al dividir: 3.0
/ 2.0";
}

TEST(U00_Ej02_test, dividirCero) {
    Calculadora<int> m_calc;
    EXPECT_ANY_THROW(m_calc.dividir(1, 0)) << "Error al dividir por cero: se
esperaba una excepcion";
}
*/
