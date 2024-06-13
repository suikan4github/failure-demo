#include "calc.hpp"

#include <assert.h>

float Calc::Inverse(float r) {
  assert(!(r == 0.0f));
  return 1.0f / r;
}
