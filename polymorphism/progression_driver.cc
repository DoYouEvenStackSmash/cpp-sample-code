#include "fibonacci_progression.h"
#include "arith_progression.h"
#include "geom_progression.h"
#include "progression.h"
#include <iostream>
using namespace mynamespace;
using namespace std;

int main() {
  Progression* prog;
  cout << "Arithmetic progression with default increment:\n";
  prog = new ArithProgression();
  prog->printProgression(10);
  delete prog;
  cout << "Arithmetic progression with increment 5:\n";
  prog = new ArithProgression(5);
  prog->printProgression(10);
  delete prog;

  cout << "Geometric progression with default increment:\n";
  prog = new GeomProgression();
  prog->printProgression(10);
  delete prog;
  cout << "Geometric progression with base 3:\n";
  prog = new GeomProgression(3);
  prog->printProgression(10);
  delete prog;

  cout << "Fibonacci progression with default increment:\n";
  prog = new FibonacciProgression();
  prog->printProgression(10);
  delete prog;
  cout << "Fibonacci progression with increment 5:\n";
  prog = new FibonacciProgression(5);
  prog->printProgression(10);
  delete prog;
  return 0;


}
