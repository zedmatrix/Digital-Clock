#include <iostream>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
      cout << "The Cat says: meow meow \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The Dog says: Woof Woof \n";
    }
};

int main() {
  Animal myAnimal;
  Cat myCat;
  Dog myDog;

  myAnimal.animalSound();
  myCat.animalSound();
  myDog.animalSound();
  return 0;
}
