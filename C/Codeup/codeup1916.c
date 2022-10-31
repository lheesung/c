#include <stdio.h>

int a, memo[201] = {0, 1, 1, 2, 3};
int f(int k) {
  if (memo[k]) return memo[k];
  return memo[k] = (f(k-1) + f(k-2)) % 10009;
}

int main() {
  scanf("%d", &a);
  printf("%d", f(a));
  return 0;
}