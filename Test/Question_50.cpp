#include<iostream>
using namespace std;
class Base {public: virtual void print() { cout << "Base"; }};
class Derived: public Base {public: void print() { cout << "Derived"; }};
int main() {
Base* baseptr; 
Derived derivedobj;
baseptr = &derivedobj;
baseptr -> print();
}
