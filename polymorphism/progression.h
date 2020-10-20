#ifndef PROGRESSION_H
#define PROGRESSION_H
namespace mynamespace {

class Progression {
  public:
    Progression(long f = 0)  // constructor
      : first_(f), cur_(f){ };
    virtual ~Progression() { };  // destructor
    void printProgression(int n);  // print the first n values
  protected:
    virtual long firstValue();  // reset
    virtual long nextValue();  // advance
  protected:
    long first_;  // first value
    long cur_;  // curent value
};
}
#endif
