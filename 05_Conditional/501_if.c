#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

/**
	�񱳿�����, ���������� ����� 1, 0	(boolean Ÿ���� ����)

	���ǽĿ��� ����� 0				--> ����
	���ǽĿ��� ����� 0 �̿��� ��	--> ��
**/

int main(int argc, char** argv)
{
	int n = 21;
	if (n % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");

	// 0 �̿��� �� -> ��
	if (100) printf("���Դϴ�.\n");

	// 0 -> ����
	if (4 - (2 * 2)) 
		printf("���Դϴ�.\n");
	else 
		printf("�����Դϴ�.\n");

	printf("!�� ���̸� ���� �ɱ�? %d\n", !(4 - (2 * 2)));
	printf("!�� ���̸� ���� �ɱ�? %d\n", !100);

	printf("\n�ƹ�Ű�� �Է��ϸ� ���α׷��� �����մϴ�.\n");
	_getch();
	return 0;
} // end main