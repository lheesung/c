// Data Struct & Pointer
#include <stdio.h>
#define ROWS 3
#define COLS 3
void inputMatrix(int a[][COLS]);
void transMatrix(int a[][COLS],int b[][COLS]);
void printMatrix(int a[][COLS]);
int main(){
    int array1[ROWS][COLS];
    int array2[ROWS][COLS];
		inputMatrix(array1);	
    transMatrix(array1,array2);
    printMatrix(array1);
		printf("\n   전치행렬 출력\n");
	  printf("  --------------\n");
    printMatrix(array2);
    return 0;
}
void inputMatrix(int a[][COLS]){
	int i,j;
  //3행 3열 배열 입력
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
}
void transMatrix(int a[][COLS],int b[][COLS]){
  //a배열의 행과열을 바꾸어 b배열에 저장
	for(int i=0; i<COLS; i++){
		for(int j=0;j<ROWS;j++)
			b[j][i] = a[i][j];
	}
}
void printMatrix(int a[][COLS]){
    int i,j;
    //3행 3열 배열 출력
		for(i=0; i<3; i++){
			for(j=0; j<3; j++)
				printf("%4d ",a[i][j]);
			printf("\n");
		}
}
