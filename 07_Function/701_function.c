#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

#include "myFunction.h"

/**

**/

void myFunc(int k, int v)
{
	printf("두 수는 %d %d 입니다\n", k, v);
	printf("합: %d, 차: %d, 곱: %d\n", k + v, k - v, k * v);
}

// 동일 이름의 함수 정의 불가 (overloading 없음)
// void myFunc()
// {
// }

// 함수 선언
double divByTwo(double);

int main(int argc, char** argv)
{
	myFunc(10, 20);
	myFunc(200, 100);
	myFunc(34, 2);

	printf("divByTwo() 결과 : %f\n", divByTwo(100));
	printf("addTwo() 결과 : %d\n", addTwo(10, 20));
	printf("doubleUp() 결과 : %d\n", doubleUp(10.123));

	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main

// 함수 호출(사용) 하기 전에 반.드.시 먼저 '정의' 되어 있거나, 혹은 '선언' 되어 있어야 한다.
double divByTwo(double arg)
{
	return arg / 2;
}

// 선언부는 header 파일(*.h)에 모아놓는 것이 일반적
// 정의도 별도의 c 파일(*.c)에 정의