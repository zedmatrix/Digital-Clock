#include<iostream>
using namespace std;
void foo(int*& p)
{
p = new int(10);
}
int main()
{
int *p = new int(5);
foo(p);
cout<<*p;
delete p;
p = NULL;
return 0;
}
