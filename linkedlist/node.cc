#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;
namespace mynamespace {

Node::Node(const Node& n) {
  val_ = n.val_;
  next_ = n.next_;
}

ostream& operator<<(ostream& out, const Node& n){
  out << "[" << n.val_ << "]" << "->";
  return out;
}

}
