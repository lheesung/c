#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf(a==12||a==1||a==2 ? "winter" : a==3||a==4||a==5 ? "spring" : a==6||a==7||a==8 ? "summer" : "fall");
    return 0;
}
