#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <stdlib.h>
#include "big_digits.h"

class MyTime {
	public:
	int hours;
	int minutes;
	int seconds;
	MyTime(int x, int y, int z) {
		hours = x;
		minutes = y;
		seconds = z;
	}
};

// ANSI color and positioning codes for screen
#define green() printf("\033[1;32m");
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define textReset() printf("\033[0m");
#define color(c) printf("\033[1;%dm", (c))

int main() {

    clear();

for (int c=1; c<8; c++) {
    time_t ttime = time(0);

    tm *local_time = localtime(&ttime);
    MyTime TimeObj(local_time->tm_hour, local_time->tm_min, local_time->tm_sec);


    Big_Digits(TimeObj.hours, TimeObj.minutes, TimeObj.seconds);
    this_thread::sleep_for(2000ms);
}

    gotoxy(0,15);
    textReset();
    return 0;
}
