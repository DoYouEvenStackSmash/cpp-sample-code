#include "linked_list.h"
#include "node.h"
#include <iostream>
#include <ostream>
using namespace std;

namespace mynamespace {
//remove starting at head
template <typename T>
LList<T>::~LList() {
  while (head_ && head_->next_) {
    NodeT* temp = head_->next_;
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

template <typename T>
void LList<T>::insert(T val, int posn) {
  NodeT* new_node = new NodeT(val);
  if (!head_){
    head_ = new_node;
  }else{
    NodeT* temp = head_;
    new_node->next_ = temp;
    head_ = new_node;
  }
  size_++;
}
template <typename T>
int LList<T>::find(T val) {
  NodeT* temp = head_;
  int cur_posn = 0;
  while (temp) {
    if (temp->val_== val)
      return cur_posn;
    cur_posn++;
    temp = temp->next_;
  }
  return -1;
}
template <typename T>
bool LList<T>::remove(T val) {
  if (head_ == nullptr)
    return false;

  if (head_->val_!= val && size_ ==1)
    return false;
  if (head_->val_ == val){
    NodeT* temp = head_->next_;
    delete head_;
    head_ = temp;
    size_--;
    return true;
  }
  NodeT* curr = head_;
  while (curr->next_) {
    if (curr->next_->val_ == val){
      NodeT* target = curr->next_;
      curr->next_ = target->next_;
      delete target;
      size_--;
      return true;
    }
    curr = curr->next_;
  }
  return false;
}


}
