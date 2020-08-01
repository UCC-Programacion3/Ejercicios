#include <climits>

#include "../../U01_Recursividad/Ej-01/potencia.h"
#include "gtest/gtest.h"

TEST(U01_Ej01_test, potenciaCero) { EXPECT_EQ(potencia(5, 0), 1); }

TEST(U01_Ej01_test, potenciaUno) {
  for (unsigned int i = 0; i < 100; i++)
    EXPECT_EQ(potencia(i, 1), i);
}

TEST(U01_Ej01_test, potenciaDos) {
  EXPECT_EQ(potencia(10, 2), 100);
  EXPECT_EQ(potencia(5, 2), 25);
}

TEST(U01_Ej01_test, potenciaTres) {
  EXPECT_EQ(potencia(3, 3), 27);
  EXPECT_EQ(potencia(11, 3), 1331);
}

TEST(U01_Ej01_test, potenciaCuatro) {
  EXPECT_EQ(potencia(2, 4), 2 * 2 * 2 * 2);
  EXPECT_EQ(potencia(6, 4), 6 * 6 * 6 * 6);
  EXPECT_EQ(potencia(9, 4), 9 * 9 * 9 * 9);
}

// TEST(U01_Ej01_test, potenciaExeption) {
//    EXPECT_ANY_THROW(potencia(INT_MAX / 2, 3));
//}
