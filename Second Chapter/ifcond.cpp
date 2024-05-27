#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  // Provide a seed value
  srand((unsigned) time(NULL));

  // Get Random numbers
  int x = rand() % 100;
  int y = rand() % 80;

  // Long Hand if condition
  if (x > y) {
    cout << "X=";
    cout << x << " Is Larger Than " << y << endl;
  } else {
    cout << "Y=";
    cout << y << " Is Larger Than " << x << endl;
  }

  // Short Hand if condition
  string result = (x > y) ? "X is Larger" : "Y is Larger";
  cout << result << endl;

return 0;
}
