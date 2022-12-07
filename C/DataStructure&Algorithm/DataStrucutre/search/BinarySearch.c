#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	
	if (num1 < num2)    // a가 b보다 작을 때는
			return -1; // -1 반환
	if (num1 > num2)// a가 b보다 클 때는
			return 1; // 1 반환
	return 0; // a와 b가 같을 때는 0 반환
}

int n,i,key,cnt,result=3,arr[65];
int binary_search(int start, int end);
int main() {
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}
	// qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
	// for(i=0;i<n;i++){
	// 	printf("%d",arr[i]);
	// }
	scanf("%d", &key);
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
	else return -1;
}