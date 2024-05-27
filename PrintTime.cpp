#include <sys/ioctl.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define Clear() printf("\033[H\033[J")
#define textReset() printf("\033[0m");
#define hideCursor() printf("\033[?25l");
#define showCursor() printf("\033[?25h");

// color code constants
const int
    C_red = 31,
    C_green = 32,
    C_yellow = 33,
    C_blue = 34,
    C_magenta = 35,
    C_cyan = 36,
    C_white = 37;

int Act_Hours,
    Act_Minutes,
    Act_Seconds;
string H1, M1, S1, MESSAGE;

int keyPressed() {
    int i;
    ioctl(0, FIONREAD, &i);
    return i;
}
void Locate (int y, int x, int c, char l) {
    //y is the row , x is the column, c is the color, l is the Letter/Character
    printf("\033[%d;%dH\033[1;%dm",y ,x, c);
    putchar(l);
}

void GetTime() {
    time_t TIMENOW = time(0);
    tm *local_time = localtime(&TIMENOW);

    Act_Hours = local_time->tm_hour;
    Act_Minutes = local_time->tm_min;
    Act_Seconds = local_time->tm_sec;
}

void ShowTime() {
    if (Act_Hours < 10) {
        H1 = "0" + to_string(Act_Hours);
    } else {
        H1 = to_string(Act_Hours);
    }

    if (Act_Minutes <10) {
        M1 = "0" + to_string(Act_Minutes);
    } else {
        M1 = to_string(Act_Minutes);
    }

    if (Act_Seconds <10) {
        S1 = "0" + to_string(Act_Seconds);
    } else {
        S1 = to_string(Act_Seconds);
    }
    MESSAGE = H1+":"+M1+":"+S1;
    int LENGTH = MESSAGE.length();

    for (int i=0; i<LENGTH; i++) {
        //int PColor = (C_red + i % 7 );
        Locate(3, 3 + i, C_yellow, MESSAGE[i]);
    }
}

int main() {
    //system("stty raw -echo");
    hideCursor();
    Clear();
    GetTime();
    ShowTime();

    //Locate(5,5,C_green, 65);
    //printf("%010d:%010d:%010d", Act_Hours, Act_Minutes, Act_Seconds);
    //sleep(1);
    char ch=0;
    while(ch!=27 && ch!=113 && ch!=120) {
        GetTime();
        ShowTime();

        //Locate(5, 5, C_green, 65);
        //printf("%1d:%1d:%1d", Act_Hours, Act_Minutes, Act_Seconds);

        if (keyPressed()) {
            ch=getchar();
            switch (ch) {
                case 27:
                    getchar(); ch=getchar();
                    switch (ch) {
                        case 27:
                            cout << endl << "ESC" << ch << endl;
                            exit(0);
                            break;
                        case 68:
                            cout << "Left";
                            break;
                        case 67:
                            cout << "Right";
                            break;
                    }
                    break;
                case 102:
                    //showForeground=!showForeground;
                    //init_all();
                    break;
            }
        }

    }
    Locate(20,1,C_white, 'X');
    textReset();
    showCursor();
    return 0;
}
