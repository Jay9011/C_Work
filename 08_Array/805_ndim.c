#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

/**

**/

int main(int argc, char** argv)
{
	// 2차원 배열 선언
	int array[4][3] = { 0 };	// 4x3

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("arr[%d][%d] = %d\n", i, j, array[i][j]);
		}
	}

	char str[4][20] = {
		"hello",
		"myworld",
		"c-world",
		"윤종섭"
	};

	for (int i = 0; i < 4; i++)
	{
		printf("str[%d] = %s\n", i, str[i]);
	}

	printf("\n아무키나 입력하면 프로그램을 종료합니다.\n");
	_getch();
	return 0;
} // end main