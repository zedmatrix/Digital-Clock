#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// Quick Functions to Clear the screen, Reset the text display, Locate the cursor
#define Clear() printf("\033[H\033[J");
#define textReset() printf("\033[0m");
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x));

// Class structure to store hours, minutes and seconds
int Act_Hours,
    Act_Minutes,
    Act_Seconds;

// Function to Get the Local Time
void GetTime() {
	time_t TIMENOW = time(0);
	tm *local_time = localtime(&TIMENOW);

    Act_Hours = local_time->tm_hour;
    Act_Minutes = local_time->tm_min;
    Act_Seconds = local_time->tm_sec;
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

    GetTime();
    string Prnt_Hour = to_string(Act_Hours);


    gotoxy(10,5);
    printf("\033[1;%dm", C_yellow);
    cout << Prnt_Hour.length();

    gotoxy(10,7);
    printf("%d : %d : %d ", Act_Hours, Act_Minutes, Act_Seconds);

    gotoxy(0,8);
    printf("\033[1;%dm X", C_red);
    textReset();
    return 0;
}
