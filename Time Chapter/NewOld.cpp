#include <chrono>
#include <ctime>
#include <iostream>
#include <thread>
using namespace std;
using namespace chrono_literals;

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define yellow() printf("\033[1;33m");

int main()
{
    clear();
    // The old way
    time_t oldt = time({});

    cout << "Local Time is " << ctime(&oldt) << '\n';
    this_thread::sleep_for(1000ms);

    // The new way
    auto const now = chrono::system_clock::now();
    time_t newt = chrono::system_clock::to_time_t(now);

    cout << "newt - oldt == " << newt - oldt << " s\n";
    cout << "GMT Time is " << ctime(&newt) << '\n';

    yellow();
    for (int i = 0; i<3; i++) {
        newt = chrono::system_clock::to_time_t(now);
        this_thread::sleep_for(3000ms);

        gotoxy(10,2);
        cout << "Local Time is " << ctime(&newt) << '\n';
    }
    return 0;
}
