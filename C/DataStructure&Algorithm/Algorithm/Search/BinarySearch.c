#include <stdio.h>
int n,i,key,cnt,result=3,arr[65];
int binary_search(int start, int end);
int main() {
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	result = binary_search(0, n-1);
	if(result == -1) {
		printf("실패");
		return 0;
	}
	printf("%d",result);
	return 0;
}


int binary_search(int start, int end){
	int middle;
	if(start<=end){
		cnt++;
		middle=(start+end) / 2;
		if(key == arr[middle]) return cnt;
		else if(key < arr[middle]) return binary_search(start, middle -1);
		else if(key > arr[middle]) return binary_search(middle+1, end);
	}
}