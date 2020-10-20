#include "SimpleNode.h"
#include <limits.h>

using namespace std;

SimpleNode::SimpleNode() {
  val_ = INT_MIN;
  next_ = nullptr;
}

SimpleNode::SimpleNode(int h, SimpleNode* n){
  val_ = h;
  next_ = n;
}

SimpleNode::SimpleNode(const SimpleNode& n) {
  val_ = n.val_;
  next_ = n.next_;
}
SimpleNode SimpleNode::operator=(SimpleNode& n){
  if (this != &n){
    val_ = n.val_;
    next_ = n.next_;
  }
  return *this;
}
SimpleNode::~SimpleNode() {
  next_ = nullptr;
  val_ = INT_MIN;
}

ostream& operator<<(ostream& out, const SimpleNode& n) {
  cout << n.val_;
}
