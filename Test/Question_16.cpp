#include<iostream>
using namespace std;
void print(bool arr[5]) {
 for(int i = 0; i < 5; i++)
 cout<< arr[i] <<" ";
}
int main() {
 bool arr[5] = {1, 0, 1, 0, 1};
 print(arr);
 return 0;
}
