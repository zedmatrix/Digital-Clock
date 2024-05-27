#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!" << endl;
    }
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car carObj; // Create an object of Car
  cout << carObj.speed(200); // Call the method with an argument
  MyClass myObj;

  return 0;
}
