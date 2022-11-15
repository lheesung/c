#include<stdio.h>
//         3      A      B       C
void h(int n,char a,char b, char c){
  if(n==1)
    // printf("h(%d,%c,%c,%c)",n,a,b,c);
    printf("%d : %c -> %c\n",n,a,c);
  else{
    // printf("h(%d,%c,%c,%c)",n-1,a,c,b);
    h(n-1,a,c,b);
    printf("%d : %c -> %c\n",n,a,c);
    // printf("h(%d,%c,%c,%c)",n-1,b,a,c);
    h(n-1,b,a,c);
  }
}

int main(){
  int n;
  scanf("%d",&n);         // n = 3
  h(n,'A','B','C');
  return 0;
}

/*
위 코드에서 만약 입력이 1이라면 수행횟수는 총 1회이다. 입력이 2라면 수행횟수는 3회 실행된다.
입력이 만약 3이라면 코드는 총 8회 실행된다. 입력이 4라면 위 코드는 15번 실행된다. 위의 입력에
따른 실행횟수를 보았을 때 이를 입력 n 에 관한 식으로 나타내면 수행횟수는 (2^n) - 1 이 된다.
따라서 이를 Big O notation 으로 나타내면 O(2^n)이다.
*/

/*
출력:
1 : A -> C
2 : A -> B
1 : C -> B
3 : A -> C
1 : B -> A
2 : B -> C
1 : A -> C
*/
