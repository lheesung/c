#include<stdio.h>
size_t myStrlen(const char* str); // hello --> 5
int main(void){
	char s[] = "Hello";
	printf("%d\n",myStrlen(s));
	return 0;
}
size_t myStrlen(const char* str){
	char* s; // i 와 같이 주소를 담는 변수
	for(s =str; *s !='\0'; s++) // *s가 참인동안 == *s 가 null 값이 아니면 주소를 1씩 증가한다 , 시작 주소부터 문자열의 크기만큼  s가 1씩 증가
		printf("%8X\n",s); // %8X 주소를 16진수로 출력, %p
	printf("%8X\n",s);
	printf("s = %8X, str = %8x \n",s,str);
	return s-str; //s > str --> [ 마지막 주소 (증가된 문자의 주소) - 시작주소 ] 가 문자열의 길이다.
}