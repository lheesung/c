# 배열의 원소연산 **(삽입, 삭제)**

## 1. 함수 설명
> **배열을 입력 받는 함수 - inputArray()**
```c
void inputArray(int a[], int **size**) {
  int i; 
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }
}
```
> **배열을 출력하는 함수 - outputArray**
```c
void outputArray(int a[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
```
> **배열에 값을 삽입하는 함수 - insertArray()**
```c
int insertArray(int a[], int num, int index, int size) {
  int i;
  if (index == size) { // 배열의 index와 size가 같으면
    a[index] = num; // 배열의 index 번째에 num을 삽입해라
    size++; // 위 작업을 수행 한 뒤 배열의 크기를 한칸 늘려라
  }

  else { // 배열의 index가 size와 같지 않을 때
    // ex) size = 3, index = 1
    for (i = size; i > index; i--) { // size가 index와 같아질 때 까지
      a[i] = a[i - 1]; // a[3] = a[2] -> a[2] = a[1] -> a[1] = a[0]
    }
    a[i] = num;
    size++;
  }
  return size; // size값을 리턴
}
```
> **배열의 값을 삭제하는 함수**
```c
int deleteArray(int a[], int index, int size) {
  int i;
  // ex) index = 3 size = 4
  if (index == size - 1) {  // True
    a[index] = 0; // a[3] = 0;
    size--; // 배열의 크기를 1 줄임
  } else {
    size--; // 배열의 크기를 1 줄임
    for (i = index; i < size; i++) { 
      a[i] = a[i + 1];
    }
  }
  return size;
}   
```
***
```c
int main() {
  int a[10], size = 0;
  size = insertArray(a, 10, 0, size); // 1단계
  size = insertArray(a, 20, 1, size); // 2단계
  size = insertArray(a, 30, 2, size); // 3단계
  size = insertArray(a, 50, 2, size); // 4단계
  outputArray(a, size);
  size = deleteArray(a, 1, size);
  outputArray(a, size);
  return 0;
}
```