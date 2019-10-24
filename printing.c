#include<stdio.h>
void mm(int x){
  printf("\n\nIn MM function");
  printf("Value of x = %d and Address is %p\n", x ,&x);
}
int main(){
  int x =20;
  printf("Value of x = %d and Address is %p", x ,&x);
  mm(x);
}
