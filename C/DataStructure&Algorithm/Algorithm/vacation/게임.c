#include <stdio.h>
int a[10],b[10],i,acnt,bcnt,lst,cnt;
int main() {
	for(i=0;i<10;i++) scanf("%d",&a[i]);
	for(i=0;i<10;i++) scanf("%d",&b[i]);
	for(i=0;i<10;i++){
		if(a[i] > b[i]){
			acnt+=3;
			lst = 1;
		}
		else if(a[i] < b[i]){
			bcnt+=3;
			lst = 2;
		}
		else if(a[i] == b[i]){
			acnt+=1;
			bcnt+=1;
		}
	}
	printf("%d %d\n",acnt,bcnt);
	if(acnt > bcnt) printf("A");
	else if(acnt < bcnt) printf("B");
	else if(acnt == bcnt){
		if(lst == 1) printf("A");
		else if(lst == 2) printf("B");
		else printf("D");
	}
	return 0;
}
