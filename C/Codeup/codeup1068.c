#include<stdio.h>
int main(){
  int a;
  scanf("%d",&a); 
  printf(a>=90 ? "A" : a>=70 ? "B" : a >= 40 ? "C" : "D");
  return 0;
}