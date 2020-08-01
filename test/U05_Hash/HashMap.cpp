#include "../../U05_Hash/HashMap/HashMap.h"

#include "gtest/gtest.h"

using std::string;

HashMap<int, string> *miHash;

TEST(U05_HashMap, nuevaTablaVacia) {
  miHash = new HashMap<int, string>(20);
  EXPECT_EQ(miHash->esVacio(), true);
}

TEST(U05_HashMap, agregoTres_noVacia) {
  miHash->put(3, "Tres");
  miHash->put(2, "Dos");
  miHash->put(1, "Uno");
  EXPECT_EQ(miHash->esVacio(), false);
}

TEST(U05_HashMap, obtengoDato) {
  EXPECT_EQ(miHash->get(3), "Tres");
  EXPECT_EQ(miHash->get(2), "Dos");
  EXPECT_EQ(miHash->get(1), "Uno");
  EXPECT_ANY_THROW(miHash->get(4));
}

TEST(U05_HashMap, borroDato) {
  EXPECT_NO_THROW(miHash->remove(3));
  EXPECT_ANY_THROW(miHash->remove(3)) << "Remover no tira exepcion";
}
