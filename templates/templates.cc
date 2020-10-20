#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
T genericSum(T a, T b) {
  return a+b;
}

int main() {
  cout << genericSum(1,2) << endl;
  cout << genericSum('1','2') << endl;
  string a = "1";
  string b = "2";
  cout << genericSum(a,b) << endl;
  return 0;
}
