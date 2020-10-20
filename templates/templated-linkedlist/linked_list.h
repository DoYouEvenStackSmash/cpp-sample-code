#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;
namespace mynamespace {
template <typename T>
class LList {
  typedef Node<T> NodeT;

  public:
    typedef typename NodeT::value_type value_type;
    typedef typename NodeT::pointer_type pointer_type;
    LList() : size_(0), head_(nullptr) { };  //default constructor
    ~LList();  // destructor
    void insert(T val, int posn = 0);  //insert node at posn
    int find(T val);  // find by value, return first occurence
    bool remove(T val);  // remove node at position
    int getSize() const { return size_; }  // get size_
    //template <typename U>
    NodeT* getHead() { return head_; } // get head_
    friend ostream& operator<<(ostream& out, const LList& llist) {
      out << llist.size_ << " nodes\n\t";
      NodeT* temp = llist.head_;
      while (temp) {
        out << *temp << "->";
        temp = temp->getNext();
      }
      out << "NULL" << endl;
      return out;
    }  // printing
  private:
    int size_;
    NodeT *head_;
};

}
#endif
