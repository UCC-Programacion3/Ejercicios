#include <climits>

#include "../../U01_Recursividad/Ej-02/sumatoria.h"
#include "gtest/gtest.h"

TEST(U01_Ej02_test, sumoCeros) {
  int arr[] = {0, 0, 0, 0, 0, 0};

  EXPECT_EQ(sumatoria(arr, 6), 0);
}

TEST(U01_Ej02_test, sumoSeguidos) {
  int arr[] = {0, 1, 2, 3, 4, 5};
  EXPECT_EQ(sumatoria(arr, 6), 1 + 2 + 3 + 4 + 5);
}

TEST(U01_Ej02_test, sumoDos) {
  int arr[] = {100, 100};
  EXPECT_EQ(sumatoria(arr, 2), 100 + 100);
}

TEST(U01_Ej02_test, numerosNetagivos) {
  int arr[] = {321, -321};
  EXPECT_EQ(sumatoria(arr, 2), 0);
}

// TEST(U01_Ej02_test, sumatoriaExcepcion) {
//    int arr[] = {INT_MAX, 1};
//    EXPECT_ANY_THROW(sumatoria(arr,2));
//}
