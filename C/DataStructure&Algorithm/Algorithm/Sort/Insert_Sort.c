#include <stdio.h>

int main() {
  int i, j, n,key, temp;
  scanf("%d", &n);
  int list[n];
  printf("");
  for (i = 0; i < n; i++)
    scanf("%d", &list[i]);
  printf("정렬 전 : ");

  for (i = 0; i < n; i++)
    printf("%d ", list[i]);

  for(i=1;i<n;i++){
    key = list[i];
    for(j=i-1;j>=0&&list[j] > key;j--){
      list[j+1] = list[j];
    }
    list[j+1] = key;
  }
  
  printf("\n정렬 후 : ");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
  return 0;
}