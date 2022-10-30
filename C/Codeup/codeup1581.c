#include <stdio.h>

int  myswap(int* a,int* b){
	int x = *a;
	if(*a >= *b){
		*a = *b;
		*b = x;
	}
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}