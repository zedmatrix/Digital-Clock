#include<iostream>
using namespace std;
int main() {
int numbers[] = {2,4,6,8};
 for(auto &x: numbers){
    x *=2;
 } 
 for(auto x: numbers) {
   cout<<x<<' ';
 }
}
