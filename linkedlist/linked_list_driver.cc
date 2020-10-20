
#include "linked_list.h"
#include "node.h"
#include <iostream>

using namespace std;
using namespace mynamespace;

int main() {
  LList* my_linked_list = new LList();
  cout << *my_linked_list << endl;

  //inserting nodes
  my_linked_list->insert(7);
  my_linked_list->insert(3);
  my_linked_list->insert(4);
  my_linked_list->insert(3);
  cout << *my_linked_list;

  //finding nodes
  cout << "find 3, posn: " << my_linked_list->find(3) << endl;
  cout << "find 10, posn: " << my_linked_list->find(10) << endl;
  cout << "find 7, posn: " << my_linked_list->find(7) << endl;
  //remove head
  cout << (my_linked_list->remove(3) ? "removed 3" : "failed to remove 3") << endl;
  cout << *my_linked_list;
  //remove tail
  cout << (my_linked_list->remove(7) ? "removed 7" : "failed to remove 7") << endl;
  cout << *my_linked_list;

  //traversing linked list from nodes
  Node* temp = my_linked_list->getHead();
  while (temp) {
    cout << *temp;
    temp=temp->getNext();
  }
  cout << "NULL" << endl;
  
  delete my_linked_list;

  return 0;
}
