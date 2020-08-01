#include <climits>

#include "../../U02_Listas/Ej-01/fnInvierte.h"
#include "../../U02_Listas/Lista/Lista.h"
#include "gtest/gtest.h"

TEST(U02_Ej01_test, Invertir50) {
  Lista<uint8_t> l;

  for (int i = 0; i < 50; i++)
    l.insertarUltimo(i);

  fnInvierte(&l);

  for (int i = 0; i < 50; i++) {
    EXPECT_EQ(l.getDato(i), 49 - i);
  }
}

TEST(U02_Ej01_test, InvertirVacia) {
  Lista<uint8_t> l;
  fnInvierte<uint8_t>(&l);
  EXPECT_EQ(l.esVacia(), true);
}
