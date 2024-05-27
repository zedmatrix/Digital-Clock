#include <iostream>
#include <string>
using namespace std;

int main() {
// first test of cout
  string Greeting = "Hello World!";
  string myText = "Travis is Awesome\n";
  string myPhrase = "I Am \"Learning C++\" \n";
  cout << "\t -- " << Greeting << " -- " << myText << myPhrase;

// variables
  float fl = 35e3;
  double dl = 12E4;

  cout << "Float is " << fl << endl;
  cout << "Double is " << dl << endl;

// Characters and Strings
  char a = 65, b = 98, c = 99;
  cout << a << "--";
  cout << b << "--";
  cout << c << "--" << endl;

  return 0;
}
