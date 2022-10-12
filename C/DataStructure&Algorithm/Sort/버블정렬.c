#include <stdio.h>

int main() {
  int i, j, n, temp;
  scanf("%d", &n);
  int list[n];
  printf("");
  for (i = 0; i < n; i++)
    scanf("%d", &list[i]);
  printf("정렬 전 : ");

  for (i = 0; i < n; i++)
    printf("%d ", list[i]);

  for (i = n-1; i > 0; i--) {
    for (j = 0; j < i; j++) {
      if (list[j] > list[j+1]) {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }
  printf("\n정렬 후 : ");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
  return 0;
}