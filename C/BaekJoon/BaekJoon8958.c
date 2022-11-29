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

/*
OX퀴즈 문제
O가 연속적으로 나오면 combo 변수가 1씩 중첩되며 쌓이는
점수가 증가한다. 만약 X가 나온다면 점수는 증가하지 않고
combo 변수가 1로 초기화 된다.
*/