#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

/**
	비교연산자, 논리연산자의 결과는 1, 0	(boolean 타입이 없다)

	조건식에서 결과가 0				--> 거짓
	조건식에서 결과가 0 이외의 값	--> 참
**/

int main(int argc, char** argv)
{
	int n = 21;
	if (n % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");

	// 0 이외의 값 -> 참
	if (100) printf("참입니다.\n");

	// 0 -> 거짓
	if (4 - (2 * 2)) 
		printf("참입니다.\n");
	else 
		printf("거짓입니다.\n");

	printf("!를 붙이면 뭐가 될까? %d\n", !(4 - (2 * 2)));
	printf("!를 붙이면 뭐가 될까? %d\n", !100);

	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main