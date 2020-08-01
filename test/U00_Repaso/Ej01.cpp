#include <type_traits>
#include <typeinfo>

#include "../../U00_Repaso/Ej-01/Circulo.h"
#include "../../U00_Repaso/Ej-01/Cuadrado.h"
#include "../../U00_Repaso/Ej-01/Geometria.h"
#include "../../U00_Repaso/Ej-01/Triangulo.h"
#include "gtest/gtest.h"

int PORTA;
class subClass : public Geometria {
public:
  virtual float getPerimetro() { return 1; }

  virtual float getSuperficie() { return 2; }
};

TEST(U00_Ej01_test, getPerimetroEsVirtual) {
  PORTA = 0x3f;
  subClass a;
  EXPECT_EQ(a.getPerimetro(), 1);
}

TEST(U00_Ej01_test, getSuperficieEsVirtual) {
  subClass a;
  EXPECT_EQ(a.getSuperficie(), 2);
}

TEST(U00_Ej01_test, CuadradoEsHeredado) {
  const bool cuadrado_h = std::is_base_of<Geometria, Cuadrado>::value;
  EXPECT_TRUE(cuadrado_h);
}

TEST(U00_Ej01_test, TrianguloEsHeredado) {
  const bool triangulo_h = std::is_base_of<Geometria, Triangulo>::value;
  EXPECT_TRUE(triangulo_h);
}

TEST(U00_Ej01_test, CirculoEsHeredado) {
  const bool circulo_h = std::is_base_of<Geometria, Circulo>::value;
  EXPECT_TRUE(circulo_h);
}
