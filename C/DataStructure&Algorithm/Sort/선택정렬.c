#include <stdio.h>

int main() {
  int i, j, n, standard, temp;
  scanf("%d", &n);
  int list[n];
  printf("");
  for (i = 0; i < n; i++) scanf("%d", &list[i]);
  printf("정렬 전 : ");
  
  for (i = 0; i < n; i++) printf("%d ", list[i]);
  
  for (i = 0; i < n - 1; i++) {
    standard = i;
    for (j = i + 1; j < n; j++)
      if (list[j] < list[standard])
        standard = j;
    
    temp = list[i];
    list[i] = list[standard];
    list[standard] = temp;
  }
  printf("\n정렬 후 : ");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
  return 0;
}