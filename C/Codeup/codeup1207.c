#include<stdio.h>

int main(){
    int a,b=4,cnt=0;
    char arr[100][5] = {"모","도","개","걸","윷"};
    while(b--){
        scanf("%d",&a);
        if(a) cnt++;
    }
    printf("%s",arr[cnt]);
	return 0;
}