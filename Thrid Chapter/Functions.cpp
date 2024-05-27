#include <iostream>
using namespace std;

int Add(int z) {
    return 6 + z;
}

int Area(int x, int y) {
    return x + y;
}

void myFunc(string country = " Norway ") {
    cout << country << "\n";
}

int main() {
    cout << Add(7);
    myFunc(" Sweden ");
    cout << Area(12,12) << endl;

    cout << Add(13);
    myFunc();
    cout << Area(15,15) << endl;

    cout << Add(25);
    myFunc(" Canada ");
    cout << Area(25,25) << endl;

    cout << Add(31);
    myFunc(" Australia ");
    cout << Area(18,18) << endl;

    return 0;
}
