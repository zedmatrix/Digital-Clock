#include <iostream>
using namespace std;

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << " Hello I Am the Parent " << endl;
    }
};

// Derived class (child)
class MyChild: public MyClass {
  public:
    void myOtherFunction() {
      cout << " Hello I Am the Child " << endl;
    }
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  myObj.myOtherFunction();

  return 0;
}
