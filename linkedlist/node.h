#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
namespace mynamespace {

class Node {
  public:
    friend class LList;
    Node(int value) : val_(value), next_(nullptr) { };  // constructor
    Node(const Node& n);  // copy constructor
    Node operator==(const Node& n);  // comparison operator
    int getVal() const { return val_; }
    Node* getNext() const { return next_; }
    friend ostream& operator<<(ostream& out, const Node& n);
  private:
    int val_;
    Node* next_;
};
}
#endif
