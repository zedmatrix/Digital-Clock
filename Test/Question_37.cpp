#include<iostream>
using namespace std;
class Base {
public:
    virtual void print() {
cout << "Base"; }
};
class Derived: public Base {
public:
void print() override { cout << "Derived"; }
};
int main() {
Base *obj = new Derived();
obj->print();
delete obj;
return 0;
}
