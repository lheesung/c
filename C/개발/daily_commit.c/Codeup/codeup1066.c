 #include<stdio.h>
// 짝수 홀수 판단
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf(a%2==0 ? "even\n" : "odd\n");
    printf(b%2==0 ? "even\n" : "odd\n");
    printf(c%2==0 ? "even\n" : "odd\n");
    return 0;
}