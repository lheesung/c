#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    printf(a == 65 ? "best!!!" : a == 66 ? "good!!" : a == 67 ? "run!" : a == 68 ? "slowly~" : "what?");
    return 0;
}
