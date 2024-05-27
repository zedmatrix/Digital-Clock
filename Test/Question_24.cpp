#include <iostream>

class Base {
public:
  void display() {std::cout << "Base class";}
};

class Derived : public Base {
public:
  void display() {std::cout << "Derived class";}
};

int main() {
  Base* basePtr; 
  Derived derivedObj;
  basePtr = &derivedObj;
  basePtr->display();
  return 0;
}
