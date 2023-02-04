#include <stdio.h>
#include <stdbool.h>
int reverse(int k){
	int res = 0, t;
	while(k > 0){
		t = k % 10;
		res = res*10 + t;
		k /= 10;
	}
	return res;
}

bool Pcheck(int k){
	int i;
	if(k == 1) return false;
	bool temp = true;
	for(i=2;i<k;i++){
		if(k%i==0){
			temp = false;
			break;
		}
	}
	return temp;
}

int a,x,i,rv;
int main() {
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&x);
		rv = reverse(x);
		if(Pcheck(rv))
			printf("%d ",rv);
	}
	return 0;
}
