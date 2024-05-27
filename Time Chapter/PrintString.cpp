#include <iostream>
#include <ctime>
#include <string>
using namespace std;

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define green() printf("\033[1;32m");

int main() {
constexpr int Digit_Lines = 8;
constexpr int Digit_Nums = 2;
const string Digit[Digit_Nums][Digit_Lines]={
       {" xxxxxx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xxxxxx ",
        "        " },
       {"     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "        " },
       {" xxxxxx ",
        "     xx ",
        "     xx ",
        " xxxxxx ",
        " xx     ",
        " xx     ",
        " xxxxxx ",
        "        " }
};
    gotoxy(2,30);
    green();
    for ( int i=0; i < Digit_Lines; ++i) {
        cout << Digit[2][i] << " ";
    }

    printf("\033[0m");
    return 0;
}
