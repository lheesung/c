#include<stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  printf(a>0 ? "plus\n" : "minus\n");
  printf(a%2==0 ? "even" : "odd");
  return 0;
}