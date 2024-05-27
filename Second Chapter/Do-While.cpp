#include <iostream>
using namespace std;

int main() {
  // Initialize Day
  int Day = 0;

  // While Loop for Days
  do {

  cout << "What Day is on the Spinner: ";
  switch (Day) {
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 0:
      cout << "Sunday";
      break;
    default:
      cout << "Invalid Day";

  }
  cout << endl;
  Day++;

  }
  while (Day < 8);

return 0;
}
