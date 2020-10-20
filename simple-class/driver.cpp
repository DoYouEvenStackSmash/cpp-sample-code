#include "SimpleNode.h"

//using namespace std;

int main() {
  SimpleNode n;
  cout << n.getVal() << endl;
  SimpleNode a = {10};
  cout << a << endl;
  n = a;
  cout << n << endl;
  return 0;

}
