#include <iostream>
using namespace std;

#define green() printf("\033[1;32m");
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

int main() {

    clear();
    int Hours = 12;
    int Minutes = 35;
    int Seconds = 45;
  for (int c = 31; c < 38; c++) {
    gotoxy(c % 30,c % 30);
    printf("\033[1;%dm", c);

    cout << Hours / 10 << Hours % 10 << ":";
    cout << Minutes / 10 << Minutes % 10 << ":";
    cout << Seconds / 10 << Seconds % 10 << '\n';
  }
    return 0;

}
