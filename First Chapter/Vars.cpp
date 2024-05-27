#include <iostream>
using namespace std;

int main() {
// first test of cout
  cout << "\t -- Hello World! -- \n";

// third test
  string myText = "\nTravis is Awesome\n";
  cout << myText;

// second test of cout
  cout << "\n I Am \"Learning C++\" \n";

// variables
  const int myNum = 15;
  const float PI = 3.141592;
  double myFloat = 7.99;
  double mySum = myFloat + myNum;

  cout << myFloat << " + " << myNum << " = " << mySum << endl;
  cout << PI << endl;
// multiple variables
  int x,y,z;
  cout << " Type a(x) Number: ";
  cin >> x;
  cout << " Type a(y) Number: ";
  cin >> y;
  cout << " Type a(z) Number: ";
  cin >> z;

  int sum = x + y + z;
  cout << "The Sum is:" << sum << endl;

  return 0;
}
