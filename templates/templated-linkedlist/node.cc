#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;
namespace mynamespace {

template <typename T>
Node<T>::Node(value_type value)
  : val_(value), next_(nullptr) { }

template <typename T>
Node<T>::Node(const Node<value_type>& n) {
  val_ = n.val_;
  next_ = n.next_;
}

}
