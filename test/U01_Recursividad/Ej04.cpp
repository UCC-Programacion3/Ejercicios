#include "../../U01_Recursividad/Ej-04/mcd.h"
#include "gtest/gtest.h"

// TEST(U01_Ej04_test, excepcionSiBesCero) {
//    EXPECT_ANY_THROW(mcd(0,0));
//}

TEST(U01_Ej04_test, val_119) { EXPECT_EQ(mcd(238, 238 / 2 * 3), 238 / 2); }

TEST(U01_Ej04_test, val_97) { EXPECT_EQ(mcd(97 * 89, 97 * 37), 97); }

TEST(U01_Ej04_test, val_525) { EXPECT_EQ(mcd(525, 525 / 5 * 7), 525 / 5); }

TEST(U01_Ej04_test, val_929) { EXPECT_EQ(mcd(929 * 83, 929 * 181), 929); }

TEST(U01_Ej04_test, val_283) { EXPECT_EQ(mcd(283, 283 * 2), 283); }

TEST(U01_Ej04_test, primos1) { EXPECT_EQ(mcd(89, 97), 1); }

TEST(U01_Ej04_test, primos2) { EXPECT_EQ(mcd(977, 997), 1); }
