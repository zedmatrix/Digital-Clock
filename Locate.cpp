#include <iostream>
using namespace std;

#define Clear() printf("\033[H\033[J")
#define textReset() printf("\033[0m");

void Locate (int y, int x, int c, char l) {
    //y is the row , x is the column, c is the color, l is the Letter/Character
    printf("\033[%d;%dH \033[%d;%dm %c",y ,x, '1', c, l);

}

int main() {
    // color code constants
    const int
        C_red = 31,
        C_green = 32,
        C_yellow = 33,
        C_blue = 34,
        C_magenta = 35,
        C_cyan = 36,
        C_white = 37;

    Clear();

    for (int i=0; i<10; i++) {

        Locate(i+2, i+2, C_red, char(i + 66));

    }
    Locate(20,1,C_white, 'X');
    textReset();
    return 0;
}
