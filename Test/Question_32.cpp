#include<iostream>
using namespace std;
void update(int &x) { x*=3; }
int main() { int a = 5; update(a); return a; }

