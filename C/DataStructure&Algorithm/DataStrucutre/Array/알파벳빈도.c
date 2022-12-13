#include <stdio.h>
#include <string.h>
int main() {
	char s[1000001] = {};
	char a[91] = {0, };
	int i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		a[s[i]]++;
	}
	for(i=65; i<=90; i++){
		if(a[i]!=0) printf("%c : %d\n",i,a[i]);
	}
	
	return 0;
}