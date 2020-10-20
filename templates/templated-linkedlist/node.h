#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
namespace mynamespace {
template <typename T>
class Node {
  public:
    typedef T value_type;
    typedef T& reference_type;
    typedef T* pointer_type;
    template <typename U>
    friend class LList;
    Node(value_type value);  // constructor
    Node(const Node& n);  // copy constructor
    bool operator==(const Node<T>& n);  // comparison operator
    value_type getVal() const { return val_; }
    Node* getNext() const { return next_; }
    friend ostream& operator<<(ostream& out, const Node& n) {
      return out << "[" << n.val_ << "]";
    }
  private:
    value_type val_;
    Node<T>* next_;
};
}
#endif
