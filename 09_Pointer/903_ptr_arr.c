#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)


/** 포인터와 배열
	배열의 이름은 포인터다! 포인터 '상수'다!
	포인터 연산이 적용된다.
	배열첨자 연산자 []  ← 결국 포인터 연산이다
	arr[n] ↔ *(arr + n)   ★★★
**/



int main(int argc, char** argv)
{
	int arr[3] = { 10, 20, 30 };

	// 배열 이름은 곧 '주소' 다. 포인터다! 포인터처럼 동작한다.
	// arr의 타입은? int* 타입
	printf("arr = %p\n", arr);		// 결과 : 주소값
	printf("*arr = %d\n", *arr);	// 결과 : 배열 첫번째 값

	// 포인터 연산 ( +, - ) 동작
	printf("arr + 1 = %p, *(arr + 1) = %d, arr[1] = %d\n", arr + 1, *(arr + 1), arr[1]);	// 결과 : 배열 두번째 주소, 배열 두번째 값
	printf("arr + 2 = %p, *(arr + 2) = %d, arr[2] = %d\n", arr + 2, *(arr + 2), arr[2]);	// 결과 : 배열 세번째 주소, 배열 세번째 값

	// ※ 주의 : * 참조연산자 우선순위가 일반적인 산술연산자보다 우선순위가 높다.
	printf("*(arr + 1) = %d, *arr + 1 = %d\n", *(arr + 1), *arr + 1);	// 결과 : arr[1] 의 값, arr[0] + 1 의 값

	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main