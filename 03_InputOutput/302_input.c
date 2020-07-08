#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int kor, eng, math;
	printf("국어 점수 입력 : ");
	scanf("%d", &kor);	// 정수 한 개 입력 -> kor 변수에 대입
	
	printf("영어 점수 입력 : ");
	scanf("%d", &eng);	// 정수 한 개 입력 -> eng 변수에 대입
	
	printf("수학 점수 입력 : ");
	scanf("%d", &math);	// 정수 한 개 입력 -> math 변수에 대입
						// 변수명 앞에 & 붙이기!

	printf("입력하신 점수는 %d, %d, %d 입니다.\n", kor, eng, math);

	getchar();
	getchar();
}