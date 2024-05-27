#include<iostream>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(){
swap(a, b);
printf("%d %d", a, b);
}

