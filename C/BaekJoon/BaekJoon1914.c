#include<stdio.h>
void hanoi(int k, int A, int B, int C){
    if(k==1)
        printf("%d %d\n",A,C);
    else{
        hanoi(k-1, A, C, B);
        printf("%d %d\n", k, A, C);
        hanoi(k-1, B, A, C);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    hanoi(a,1,2,3);
    return 0;
}