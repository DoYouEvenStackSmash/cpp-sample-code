#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;
namespace mynamespace {

class LList {
  public:
    LList() : size_(0), head_(nullptr) { };  //default constructor
    ~LList();  // destructor
    LList(const LList& rllist);  // copy constructor
    LList operator=(const LList& rllist);  // overloaded assignment operator
    LList operator==(const LList& rllist);  // overloaded comparison operator
    void insert(int val, int posn = 0);  //insert node at posn
    int find(int val);  // find by value, return first occurence
    bool remove(int val);  // remove node at position
    int getSize() const { return size_; }  // get size_
    Node* getHead() { return head_; } // get head_
    friend ostream& operator<<(ostream& out, const LList& llist);  // printing
  private:
    int size_;
    Node* head_;
};

}
#endif
