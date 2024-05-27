#include <iostream>
#include <ctime>
#include <thread>
using namespace std;

#define green() printf("\033[1;32m");
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

int main() {
    clear();
    green();
    for (int i=0; i<3; i++) {
        time_t current = time(0);
        gotoxy(25,5);
        cout << "The time is : " << ctime(&current) << flush;
        this_thread::sleep_for(3000ms);
    }

    return 0;
}
