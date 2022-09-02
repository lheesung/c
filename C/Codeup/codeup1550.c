#include <stdio.h>

long long int n;



long long int sqrt(long long int k){
	long long int i;
	for(i=0;i*i<n;i++);
	return i*i==n?i:i*i!=n?i-1:0;
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
