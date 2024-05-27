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

  string FirstName;
  string LastName;
  string Address;

  cout << "Type Your First Name? ";
  cin >> FirstName;

  cout << "Type Your Last Name? ";
  cin >> LastName;
  cin.ignore();

  cout << "Type Your Address? ";
  getline(cin, Address);

  cout << greeting << "\"" << FirstName.append(LastName) << "\"" << endl;

  cout << "Your Address: " << Address << endl;
  cout << "The Length of Address is: " << Address.length() << endl;

  return 0;
}

