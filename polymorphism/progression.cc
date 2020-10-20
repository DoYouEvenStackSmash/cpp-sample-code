#include "progression.h"
#include <iostream>
using namespace std;
namespace mynamespace {

void Progression::printProgression(int n) {
  cout << firstValue();
  for (int i = 2; i <= n; i++)
    cout << ' ' << nextValue();
  cout << endl;
}

long Progression::firstValue() {
  cur_ = first_;
  return cur_;
}

long Progression::nextValue() {
  return ++cur_;
}
}
