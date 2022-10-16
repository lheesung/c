#include <stdio.h>
#include <math.h>
#define N 5
typedef struct point{
	int x,  y;
}POINT;
int main() {
	int i,min=10000,mindex;
	double dt;
	POINT p[5];
	POINT origin = { 0, 0};
	// 여기에 코드 추가
	for(i=0;i<5;i++)
		scanf("%d %d",&p[i].x,&p[i].y);
	
	// for(i=0;i<5;i++)
	// 	printf("(%d, %d)\n",p[i].x,p[i].y);
	
	for(i=0;i<5;i++){
		dt = sqrt(pow(p[i].x-0, 2) + pow(p[i].y-0, 2));
		dt = dt + p[i].x + p[i].y;
		if(dt<=min){
			min = dt;
			mindex = i;
		}
		// printf("(%d , %d) = %.2lf \n",p[i].x, p[i].y,dt);
	}
	
	printf("원점에서 가장 가까운 좌표 : (%4d,%5d)",p[mindex].x,p[mindex].y);
	return 0;
}