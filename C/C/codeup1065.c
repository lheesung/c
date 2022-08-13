#include<stdio.h>
// 짝수만 출력
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a%2==0) printf("%d",a); 
    if(b%2==0) printf("%d",b);
    if(c%2==0) printf("%d",c);

    return 0;
}