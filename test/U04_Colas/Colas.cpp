#include "../../U04_Colas/Cola/Cola.h"
#include "gtest/gtest.h"

Cola<int> *colaTest;

TEST(U04_Colas, nuevaColaVacia) {
  colaTest = new Cola<int>();
  EXPECT_EQ(colaTest->esVacia(), true);
}

TEST(U04_Colas, agregoTres_noVacia) {
  colaTest->encolar(3);
  colaTest->encolar(2);
  colaTest->encolar(1);
  EXPECT_EQ(colaTest->esVacia(), false);
}

TEST(U04_Colas, popEnSentidoInverso) {
  EXPECT_EQ(colaTest->desencolar(), 1);
  EXPECT_EQ(colaTest->desencolar(), 2);
  EXPECT_EQ(colaTest->desencolar(), 3);
  EXPECT_EQ(colaTest->esVacia(), true);
}

TEST(U04_Colas, otroPopException) { EXPECT_ANY_THROW(colaTest->desencolar()); }
