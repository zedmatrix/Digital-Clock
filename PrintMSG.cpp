#include <string>
#include <cstring>
#include <iostream>
#include <sys/ioctl.h>
#include "num_digits.h"
using namespace std;

#define Clear() printf("\033[H\033[J")
#define textReset() printf("\033[0m");
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

int keyPressed() {
    int i;
    ioctl(0, FIONREAD, &i);
    return i;
}
// color code constants
const int
    C_black = 30,
    C_red = 31,
    C_green = 32,
    C_yellow = 33,
    C_blue = 34,
    C_magenta = 35,
    C_cyan = 36,
    C_white = 37;


int Act_Hours, Act_Minutes, Act_Seconds;
int H1,H2,M1,M2,S1,S2;

void Locate (int y, int x, int a, int c, char l) {
    /* y is the row , x is the column
    a is the attribute ,c is the color, l is the Letter/Character*/

    printf("\033[%d;%dH\033[%d;%dm",y ,x ,a ,c);
    putchar(l);
}

void PRINT_DIGIT (int d, int o, int a, int c) {
    // int d is digit, int o is offset, int c is color
    int MAXX = 8;
    int MAXY = 8;

    for (int i=0; i<MAXY; i++) {
        string LINE = DIGIT[d][i];
        for (int j=0; j<MAXX; j++) {
            char LETTER = LINE[j];
            Locate(3 + i, o + j, a, c, LETTER);
        }
    }
}

void GetTime() {
    time_t TIMENOW = time(0);
    tm *local_time = localtime(&TIMENOW);

    Act_Hours = local_time->tm_hour;
    Act_Minutes = local_time->tm_min;
    Act_Seconds = local_time->tm_sec;
}

void ShowTime(int HC, int MC, int SC) {
    // Convert Time to individual digits
    H1 = Act_Hours / 10;
    H2 = Act_Hours % 10;
    M1 = Act_Minutes / 10;
    M2 = Act_Minutes % 10;
    S1 = Act_Seconds / 10;
    S2 = Act_Seconds % 10;

    // Print the Individual digits
    int PX = 5;
    int DX = 9;
    PRINT_DIGIT(H1, PX, 1,HC);
    PRINT_DIGIT(H2, PX += DX, 1,HC);
    PRINT_DIGIT(10, PX += DX, 5,C_cyan);

    PRINT_DIGIT(M1, PX += DX, 25,MC);
    PRINT_DIGIT(M2, PX += DX, 25,MC);
    PRINT_DIGIT(10, PX += DX, 5,C_cyan);

    PRINT_DIGIT(S1, PX += DX, 25,SC);
    PRINT_DIGIT(S2, PX += DX, 25,SC);
    PRINT_DIGIT(11, PX += DX, 0,C_black);
}

int main() {

    Clear();
    GetTime();
    ShowTime(C_red, C_magenta, C_white);

    //sleep(1);
    char ch=0;
    while(ch!=27) {
        GetTime();
        ShowTime(C_yellow, C_red, C_green);

        if (keyPressed()) {
            ch=getchar();
            switch (ch) {
                case 27:
                    cout << endl << "ESC" << ch << endl;
                    textReset();
                    exit(0);
                    break;
            }
        }

    }
    //Locate(20,1,C_white, 'X');
    textReset();
    return 0;
}
