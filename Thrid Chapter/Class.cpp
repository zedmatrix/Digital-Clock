#include <iostream>
using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
};

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

int main() {
    // Create Car objects and call the constructor

    Car carObj1("Mazda", "CX 5", 2016);
    Car carObj2("Ford", "Mustang", 1969);
    Car carObj3("BMW", "X5", 1999);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << endl;

    // First Example
    MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = " Hello World! ";

    cout << myObj.myString;
    cout << myObj.myNum << endl;


    return 0;

}
