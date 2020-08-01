#include "../../U02_Listas/Ej-04/union.h"
#include "../../U02_Listas/Lista/Lista.h"
#include "gtest/gtest.h"

TEST(U02_Ej04_test, unirDosListas) {
  Lista<int> l1, l2;
  int i;
  for (i = 0; i < 10; i++)
    l1.insertarUltimo(i);

  for (; i < 20; i++)
    l2.insertarUltimo(i);

  Lista<int> *lf = unir(l1, l2);

  EXPECT_EQ(lf->getDato(13), 13);
}
