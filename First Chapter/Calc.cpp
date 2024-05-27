#include <iostream>
using namespace std;

int main() {

  int x, y, add, sub;
  double mul;
  float div, mod;
  cout << "Enter a(x) Number:";
  cin >> x;
  cout << "Enter a(y) Number:";
  cin >> y;

  add = x + y;
  sub = x - y;
  mul = x * y;
  div = x / y;
  mod = x % y;

  cout << x << "+" << y << "=" << add << endl;
  cout << x << "-" << y << "=" << sub << endl;
  cout << x << "*" << y << "=" << mul << endl;
  cout << x << "/" << y << "=" << div << endl;
  cout << x << "%" << y << "=" << mod << endl;

  return 0;
}
