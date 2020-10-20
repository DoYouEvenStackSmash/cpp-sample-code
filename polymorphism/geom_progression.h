#ifndef GEOM_PROGRESSION_H
#define GEOM_PROGRESSION_H
#include "progression.h"
namespace mynamespace {

class GeomProgression : public Progression {
  public:
    GeomProgression(long b = 2);  // constructor
  protected:
    virtual long nextValue();  // advance
  protected:
    long base_;  // base value
};
}
#endif
