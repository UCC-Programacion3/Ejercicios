#include "../../U01_Recursividad/Ej-03/ackerman.h"
#include "gtest/gtest.h"

// Con 0
TEST(U01_Ej03_test, Conv_0_0) { EXPECT_EQ(ackerman(0, 0), 1); }

TEST(U01_Ej03_test, Conv_0_1) { EXPECT_EQ(ackerman(0, 1), 2); }

TEST(U01_Ej03_test, Conv_0_2) { EXPECT_EQ(ackerman(0, 2), 3); }

TEST(U01_Ej03_test, Conv_0_3) { EXPECT_EQ(ackerman(0, 3), 4); }

TEST(U01_Ej03_test, Conv_0_4) { EXPECT_EQ(ackerman(0, 4), 5); }

// Con 1
TEST(U01_Ej03_test, Conv_1_0) { EXPECT_EQ(ackerman(1, 0), 2); }

TEST(U01_Ej03_test, Conv_1_1) { EXPECT_EQ(ackerman(1, 1), 3); }

TEST(U01_Ej03_test, Conv_1_2) { EXPECT_EQ(ackerman(1, 2), 4); }

TEST(U01_Ej03_test, Conv_1_3) { EXPECT_EQ(ackerman(1, 3), 5); }

TEST(U01_Ej03_test, Conv_1_4) { EXPECT_EQ(ackerman(1, 4), 6); }

// Con 2
TEST(U01_Ej03_test, Conv_2_0) { EXPECT_EQ(ackerman(2, 0), 3); }

TEST(U01_Ej03_test, Conv_2_1) { EXPECT_EQ(ackerman(2, 1), 5); }

TEST(U01_Ej03_test, Conv_2_2) { EXPECT_EQ(ackerman(2, 2), 7); }

TEST(U01_Ej03_test, Conv_2_3) { EXPECT_EQ(ackerman(2, 3), 9); }

TEST(U01_Ej03_test, Conv_2_4) { EXPECT_EQ(ackerman(2, 4), 11); }

// Con 3
TEST(U01_Ej03_test, Conv_3_0) { EXPECT_EQ(ackerman(3, 0), 5); }

TEST(U01_Ej03_test, Conv_3_1) { EXPECT_EQ(ackerman(3, 1), 13); }

TEST(U01_Ej03_test, Conv_3_2) { EXPECT_EQ(ackerman(3, 2), 29); }

TEST(U01_Ej03_test, Conv_3_3) { EXPECT_EQ(ackerman(3, 3), 61); }

TEST(U01_Ej03_test, Conv_3_4) { EXPECT_EQ(ackerman(3, 4), 125); }

// Con 4
TEST(U01_Ej03_test, Conv_4_0) { EXPECT_EQ(ackerman(4, 0), 13); }

TEST(U01_Ej03_test, Conv_4_1) { EXPECT_EQ(ackerman(4, 1), 65533); }

// Con 5
TEST(U01_Ej03_test, Conv_5_0) { EXPECT_EQ(ackerman(5, 0), 65533); }
