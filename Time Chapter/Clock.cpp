#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace chrono;
int main () {

// using system_clock class

	const auto start = system_clock::now();
	for (int i = 0; i < 10000; i++) {}
	const auto end = system_clock::now();

	const duration elapsed{end - start};
 
// get today time now
	time_t myTime = system_clock::to_time_t(start);
	cout << "Today is: " << ctime(&myTime) << '\n';

	cout << "Waited: " << elapsed.count() << " seconds\n";

	return 0;
}


