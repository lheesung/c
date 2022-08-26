#include <stdio.h>

int n;

void f(int k){
  if(k > n) return;
  f(k+1);
  printf("*");
}
int main(){
  scanf("%d", &n);
  f(1);
  printf("\n");
}