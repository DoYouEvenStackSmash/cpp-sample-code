#include "linked_list.h"
#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;

namespace mynamespace {
//remove starting at head
LList::~LList() {
  while (head_ && head_->next_) {
    Node* temp = head_->next_;
    delete head_;
    head_ = temp;
    size_--;
  }
  if (head_) {
    delete head_;
    size_--;
    head_ = nullptr;
  }
}

void LList::insert(int val, int posn) {
  Node* new_node = new Node(val);
  if (!head_){
    head_ = new_node;
  }else{
    Node* temp = head_;
    new_node->next_ = temp;
    head_ = new_node;
  }
  size_++;
}

int LList::find(int val) {
  Node* temp = head_;
  int cur_posn = 0;
  while (temp) {
    if (temp->val_== val)
      return cur_posn;
    cur_posn++;
    temp = temp->next_;
  }
  return -1;
}

bool LList::remove(int val) {
  if (head_ == nullptr)
    return false;

  if (head_->val_!= val && size_ ==1)
    return false;
  if (head_->val_ == val){
    Node* temp = head_->next_;
    delete head_;
    head_ = temp;
    size_--;
    return true;
  }
  Node* curr = head_;
  while (curr->next_) {
    if (curr->next_->val_ == val){
      Node* target = curr->next_;
      curr->next_ = target->next_;
      delete target;
      size_--;
      return true;
    }
    curr = curr->next_;
  }
  return false;
}

// remember to return the ostream
ostream& operator<<(ostream& out, const LList& llist) {
  out << llist.size_ << " nodes\n\t";
  Node* temp = llist.head_;
  while (temp) {
    out << *temp;
    temp = temp->getNext();
  }
  out << "NULL" << endl;
  return out;
}


}
