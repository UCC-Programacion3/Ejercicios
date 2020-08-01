#include "../../U03_Pilas/Pila/Pila.h"

#include "gtest/gtest.h"

Pila<int> *miPila;

TEST(U03_Pilas, nuevaPilaVacia) {
  miPila = new Pila<int>();
  EXPECT_EQ(miPila->esVacia(), true);
}

TEST(U03_Pilas, agregoTres_noVacia) {
  miPila->push(3);
  miPila->push(2);
  miPila->push(1);
  EXPECT_EQ(miPila->esVacia(), false);
}

TEST(U03_Pilas, popEnSentidoInverso) {
  EXPECT_EQ(miPila->pop(), 1);
  EXPECT_EQ(miPila->pop(), 2);
  EXPECT_EQ(miPila->pop(), 3);
  EXPECT_EQ(miPila->esVacia(), true);
}

TEST(U03_Pilas, otroPopException) { EXPECT_ANY_THROW(miPila->pop()); }
