//    "Copyright 2024 Seiichi Horie
#include <gtest/gtest.h>

// Theader file of the library to test.
#include "calc.hpp"

TEST(CalcDeathTest, admitance) {
  Calc calc;

  ASSERT_DEATH(calc.Inverse(0.0f), "!(r == 0.0f)");
}
