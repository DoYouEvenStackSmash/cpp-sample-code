#ifndef ARITH_PROGRESSION_H
#define ARITH_PROGRESSION_H
#include "progression.h"
namespace mynamespace {

class ArithProgression : public Progression {
  public:
    ArithProgression(long i = 1);  //constructor
  protected:
    virtual long nextValue();  // advance
  protected:
    long inc_;  // increment
};
}
#endif
