#include <stdio.h>

int main()
{
	// 문자열 변수
	// 최대 20개의 문자를 담을 수 있는 char 배열 <-- 문자열을 담는다.
	char str1[20] = "C language";

	// %s : 문자열 출력
	printf("str1 = %s\n", str1);
	
	// 자동으로 초기화, 문자열의 문자 개수만큼의 크기로 생성된다.
	char str2[] = "Java language";
	printf("str2 = %s\n", str2);

	// 포인터 사용
	char *str3 = "Python language";
	printf("str3 = %s\n", str3);


	getchar();
}