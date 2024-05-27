#include <iostream>
#include <ctime>
using namespace std;

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define hideCursor() printf("\033[?25l");
#define showCursor() printf("\033[?25h");
#define textReset() printf("\033[0m");
#define red() printf("\033[1;31m");
#define green() printf("\033[1;32m");
#define yellow() printf("\033[1;33m");

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

int main()
{
	time_t ttime = time(0);
	char* dt = ctime(&ttime);
	tm *local_time = localtime(&ttime);
	MyTime TimeObj(local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

	clear();
	gotoxy( 10, 2);
	red();
	printf("The current local date and time is: %s", dt);

	tm *gmt_time = gmtime(&ttime);
	dt = asctime(gmt_time);

	gotoxy( 10, 4);
	yellow();
	printf("The current UTC date and time is: %s", dt);

	gotoxy( 20, 6);
	green();
	printf("%d : %d : %d ", TimeObj.hours, TimeObj.minutes, TimeObj.seconds);

	gotoxy( 1, 10);
	textReset();
	return 0;
}
