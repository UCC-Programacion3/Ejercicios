#include <string>

#include "../../U01_Recursividad/Ej-05/digitos.h"
#include "gtest/gtest.h"

TEST(U01_Ej05_test, cocientePorCero_ThrowE) {
  EXPECT_ANY_THROW(cociente(3, 0));
}

TEST(U01_Ej05_test, restoPorCero_ThrowE) { EXPECT_ANY_THROW(resto(3, 0)); }

TEST(U01_Ej05_test, restos) {
  for (unsigned int i = 0; i < 10; i++)
    for (unsigned int j = 1; j <= 10; j++)
      EXPECT_EQ(resto(i, j), i % j);
}

TEST(U01_Ej05_test, escribir) {
  for (unsigned int i = 0; i < 10; i++)
    for (unsigned int j = 1; j <= 10; j++)
      EXPECT_EQ(cociente(i, j), i / j);
}

TEST(U01_Ej05_test, escribir_espaciado) {
  std::stringstream buffer;
  std::streambuf *sbuf = std::cout.rdbuf();
  std::cout.rdbuf(buffer.rdbuf());
  escribir_espaciado(123456);
  EXPECT_EQ(buffer.str(), "1 2 3 4 5 6 ");
  buffer.str("");
  escribir_espaciado(654321);
  EXPECT_EQ(buffer.str(), "6 5 4 3 2 1 ");
  buffer.str("");
  escribir_espaciado(1937);
  EXPECT_EQ(buffer.str(), "1 9 3 7 ");
  buffer.str("");
  escribir_espaciado(7913);
  EXPECT_EQ(buffer.str(), "7 9 1 3 ");

  std::cout.rdbuf(sbuf);
}
