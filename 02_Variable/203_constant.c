#include <stdio.h>
/*
	상수 (Constant)
	한번 값이 정해지면 변경할수 없는 데이터 (변수의 반대)

	방법1 : const 키워드 사용
	방법2 : #define 사용
*/

// "컴파일 하기 전"에 MAX_VALUE 를 100으로 설정한다.
#define MAX_VALUE 100

int main()
{
	int N = 10;
	N = 20;

	const A = 15;
	//A = 25;	// 오류(활성)	E0137	식이 수정할 수 있는 lvalue여야 합니다.
	//MAX_VALUE = 20;
	printf("MAX_VALUE = %d\n", MAX_VALUE);
	
	getchar();
}

/*
	#define
	#include
	#ifndef
	#...
	전처리기 (perprocessor) : 컴파일 하기 전에 무언가를 처리하는 처리기
*/