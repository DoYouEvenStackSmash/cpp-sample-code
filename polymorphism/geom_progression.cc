#include "geom_progression.h"
namespace mynamespace {

GeomProgression::GeomProgression(long b)
  : Progression(1), base_(b) { }

long GeomProgression::nextValue() {
  cur_ *= base_;
  return cur_;
}

}
