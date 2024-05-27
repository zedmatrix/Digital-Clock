//include <iosatream>a string and io stream library
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x = "100";
  string y = "200";
  string z = y + x;
  cout << "The 3rd Character of z: " << z[3] << endl;
  z[3] = 'T';
  cout << x << y << "=" << z << endl;
  cout << "The Length of z is: " << z.length() << endl;
  cout << "The Size of z is: " << z.size() << endl;



  string greeting = "Hello";

  string FirstName = "Travis ";
  string LastName = "Tucker ";
  string FullName = FirstName + LastName;

  cout << greeting << "\"" << FullName << "\"" << endl;
  cout << "Infomation Given:" << FirstName << "\\" << LastName << endl;
  cout << "The Size of Full Name is: " << FullName.size() << endl;


  return 0;
}

