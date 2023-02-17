#include <stdio.h>
int main() {
	int i,j,n,k,temp,list[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&list[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(list[j] > 0 && list[j+1] < 0){
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",list[i]);
	return 0;
}
