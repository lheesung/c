#include <stdio.h>
int main() {
	int a,b,arr[65], i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d ",&arr[i]);
	}
	scanf("%d",&b);
	for(i=0;i<a;i++){
		if(arr[i] == b){
			printf("%d", i+1);
			return 0;
		}
	}
	printf("실패");
	return 0;
}
