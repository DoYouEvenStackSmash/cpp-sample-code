#include <iostream>
#include <ostream>

using namespace std;

class SimpleNode {
  public:
    SimpleNode();
    SimpleNode(int h, SimpleNode* n = nullptr);
    SimpleNode(const SimpleNode& n);
    SimpleNode operator=(SimpleNode& n);
    ~SimpleNode();
    friend ostream& operator<<(ostream& out, const SimpleNode& n);
    int getVal() const{ return val_;}
  private:
    int val_;
    SimpleNode* next_;
};
