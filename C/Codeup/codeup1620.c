# include <stdio.h>
int a=0,b=0,c=0;
int number(int num){
	while(num){
		a += num%10;
		num/=10;
	}
	num = a;
	while(num){
		b += num%10;
		num /=10;
	}
	num = b;
	while(num){
		c += num%10;
		num /=10;
	}
	return c;
}

int main(){
	int num;
	scanf("%d",&num);
	printf("%d",number(num));
	
	return 0;
}
