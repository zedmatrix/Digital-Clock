#include <iostream>
using namespace std;

int main() {
  // Initialize Day
  string myDays[7] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
  int Day[7] = {6, 0, 1, 2, 3, 4, 5};

  // While Loop for Days
  for (int i : Day) {
    cout << myDays[i] << endl;
  }

  // Sizeof Arrays

  int DaySize = sizeof(myDays);
  int StringSize = sizeof(string);

  cout << "Size of myDays: " << DaySize << " Bytes" << endl;
  cout << "Size of String: " << StringSize << " Bytes" << endl;
  cout << "Number of Array Elements: " << DaySize / StringSize << endl;


return 0;
}
