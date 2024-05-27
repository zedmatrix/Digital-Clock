#include<iostream>
using namespace std;
class Test {
public:
  int x;
  Test(int t) {
    x = t;
  }
};
int main() {
  Test T1(15);
  Test &T2 = T1;
  T2.x = 20;
  cout << T1.x;
  return 0;
}
