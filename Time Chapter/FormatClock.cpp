#include <iostream>
#include <ctime>
using namespace std;

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

	cout << "The current local date and time is: " << dt << '\n';

	tm *gmt_time = gmtime(&ttime);
	dt = asctime(gmt_time);
	cout << "The current UTC date and time is:" << dt << '\n';

	cout << TimeObj.hours << " : " << TimeObj.minutes << " : " << TimeObj.seconds << '\n';

	return 0;
}
