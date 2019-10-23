#include<stdio.h>

// Swap functions that swaps two values
void swapx(int *x, int *y){
      int t;
      t= *x;
      *x = *y;
      *y = t;
}
int main(){
      int a =10, b =20;
      swapx(&a, &b);
      printf("a =%d;; b =%d", a,b );
}
