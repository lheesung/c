# include <stdio.h>
# include <string.h>
// string.h 는 문자열을 다루는 헤더파일

int main()
{
	char arr[100];
	scanf("%s",arr);

	printf(strcmp(arr,"IOI")==0 ? "IOI is the International Olympiad in Informatics." : "I don't care."); // strcmp(arr) 은 문자열 arr의 길이
	return 0;
}