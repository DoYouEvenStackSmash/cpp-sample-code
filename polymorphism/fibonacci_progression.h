#ifndef FIBONACCI_PROGRESSION_H
#define FIBONACCI_PROGRESSION_H
#include "progression.h"
namespace mynamespace {

class FibonacciProgression : public Progression {
  public:
    FibonacciProgression(long f = 0, long s = 1);  // constructor
  protected:
    virtual long firstValue();  // reset
    virtual long nextValue();  // advance
  protected:
    long second_;  // next value
    long prev_;  // previous value
};
}

#endif
