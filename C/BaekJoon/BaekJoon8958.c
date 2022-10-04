#include<stdio.h>
int a,i,j,combo=1,sum;
char ox[81];
int main(){
  scanf("%d",&a);
  for(i=0;i<a;i++){
    combo=1;
    sum = 0;
    scanf("%s",ox);
    for(j=0;ox[j]!='\0';j++){
      if(ox[j]=='O'){
        sum += combo++;
      }
      else if (ox[j]=='X'){
        combo=1;
      }
    }
    printf("%d\n",sum);
  }
  return 0;
}