#include <stdio.h>
/*
	��� (Constant)
	�ѹ� ���� �������� �����Ҽ� ���� ������ (������ �ݴ�)

	���1 : const Ű���� ���
	���2 : #define ���
*/

// "������ �ϱ� ��"�� MAX_VALUE �� 100���� �����Ѵ�.
#define MAX_VALUE 100

int main()
{
	int N = 10;
	N = 20;

	const A = 15;
	//A = 25;	// ����(Ȱ��)	E0137	���� ������ �� �ִ� lvalue���� �մϴ�.
	//MAX_VALUE = 20;
	printf("MAX_VALUE = %d\n", MAX_VALUE);
	
	getchar();
}

/*
	#define
	#include
	#ifndef
	#...
	��ó���� (perprocessor) : ������ �ϱ� ���� ���𰡸� ó���ϴ� ó����
*/