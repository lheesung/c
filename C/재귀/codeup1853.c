#include <stdio.h>

int n;

int f(int k)
{
  if(k == n) return k;
  return f(k+1)+k;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(1));
  return 0;
}
