#include "arith_progression.h"
namespace mynamespace {

ArithProgression::ArithProgression(long i)
  : Progression(), inc_(i) { }

long ArithProgression::nextValue() {
  cur_ += inc_;
  return cur_;
}
}
