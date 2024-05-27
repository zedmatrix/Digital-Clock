#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  // Provide a seed value
  // srand((unsigned) time(NULL));

  // Get Random numbers
  int x = rand() % 90;
  int y = rand() % 90;
  float z = sqrt(x);

  cout << (x > y) << endl;

  cout << "X = " << x << " \\ " << "Y = " << y << endl;

  cout << "Square Root of X is " << z << endl;


return 0;
}
