#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)


/** 배열(array)
	동일한 타입의 데이터(들)을 '하나의 배열이름' 으로 담아놓은 집합데이터

	배열 변수 선언
		타입 배열변수명[배열크기];
		타입 배열변수명[] = { 초기화 값(들)..};
**/

int main(int argc, char** argv)
{
	// 5개의 int 타입 배열
	int korArr[5];

	korArr[0] = 100;
	korArr[1] = 90;
	korArr[2] = 88;
	korArr[3] = 43;
	korArr[4] = 76;

	// C언어 배열 인덱스 주의!
	// 배열 인덱스 범위 벗어나도 에러 안생김. (다음 주소값 참조)
	// 쓰레기 값 (garbage value) 가 나오게 된다.
	for (int i = 0; i <= 5; i++)
	{
		// 초기화 안된 배열은 쓰레기 값(garbage value) 가 담겨 있다.
		printf("국어[%d] = %d\n", i, korArr[i]);
	}

	printf("국어[%d] = %d\n", -1, korArr[-1]);


	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main