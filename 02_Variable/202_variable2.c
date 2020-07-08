#include <stdio.h>
/*
	C언어의 데이터 타입

	 char	: 1byte,	문자하나
	 short	: 2byte,	정수
	 int	: 4byte,	정수
	 long	: 4byte,	정수 (시스템마다 다름)
	 float	: 4byte,	실수
	 double	: 8byte,	실수
*/
int main()
{
	long l1, l2 = 12345678990;
	char ch1 = 'a';

	// char (1byte)
	printf("ch1 = %c\n", ch1);
	printf("ch1 = %d\n", ch1);

	// char 범위 : -128 ~ +127
	// unsigned char : 0 ~ 255 가능	(부호자리 없이 사용하기)
	unsigned char ch2 = 255;
	printf("ch2 = %d\n", ch2);

	getchar();
}