#include "fibonacci_progression.h"
namespace mynamespace {

FibonacciProgression::FibonacciProgression(long f, long s)
  : Progression(f), second_(s), prev_(second_ - first_) { }

long FibonacciProgression::firstValue() {
  cur_ = first_;
  prev_ = second_ - first_;
  return cur_;
}

long FibonacciProgression::nextValue() {
  long temp = prev_;
  prev_ = cur_;
  cur_ += temp;
  return cur_;
}
}
