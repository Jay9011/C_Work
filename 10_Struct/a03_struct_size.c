#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

/**
	구조체 정의(struct) 와 typedef 한 번에 사용하기
**/

typedef struct stu {
	int a;	// 4 byte
	int b;	// 4 byte
} S;		// total = 8byte

typedef struct {
	char a;	// 1 byte
	int b;	// 4 byte
} S2;		// total = 5byte

typedef struct {
	char a;		// 1 byte
	short b;	// 2 byte
	int c;		// 4 byte
	double d;	// 8 byte
} S4;			// total = 15byte

typedef struct {
	char a;		// 1 byte
	double d;	// 8 byte
	short b;	// 2 byte
	int c;		// 4 byte
} S5;			// total = 15byte

typedef struct {
	char a[9];	// 9 byte
	double b;	// 8 byte
} S6;			// total = 24byte

typedef struct {
	char c1;	// 1 byte
	char c2;	// 1 byte
	short s;	// 2 byte
	int i;		// 4 byte
	double d;	// 8 byte
} S7;

typedef struct {
	char c1;	// 1 byte
	double d;	// 8 byte
	char c2;	// 1 byte
	int i;		// 4 byte
	short s;	// 2 byte
} S8;

typedef struct {
	double d;	// 8 byte
	int i;		// 4 byte
	short s;	// 2 byte
	char c1;	// 1 byte
	char c2;	// 1 byte
} S9;

int main(int argc, char** argv)
{
	printf("sizeof(S) = %d\n", sizeof(S));		// 8 byte
	printf("sizeof(S2) = %d\n", sizeof(S2));	// 8 byte
	printf("sizeof(S4) = %d\n", sizeof(S4));	// 16 byte
	printf("sizeof(S5) = %d\n", sizeof(S5));	// 24 byte
	printf("sizeof(S6) = %d\n", sizeof(S6));	// 24 byte
	printf("sizeof(S7) = %d\n", sizeof(S7));	// 16 byte
	printf("sizeof(S8) = %d\n", sizeof(S8));	// 32 byte
	printf("sizeof(S9) = %d\n", sizeof(S9));	// 16 byte

	S5 arr[10];
	printf("sizeof(arr) = %d\n", sizeof(arr));	// 240 byte


	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main