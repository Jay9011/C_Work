#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)


/** �����Ϳ� �迭
	�迭�� �̸��� �����ʹ�! ������ '���'��!
	������ ������ ����ȴ�.
	�迭÷�� ������ []  �� �ᱹ ������ �����̴�
	arr[n] �� *(arr + n)   �ڡڡ�
**/



int main(int argc, char** argv)
{
	int arr[3] = { 10, 20, 30 };

	// �迭 �̸��� �� '�ּ�' ��. �����ʹ�! ������ó�� �����Ѵ�.
	// arr�� Ÿ����? int* Ÿ��
	printf("arr = %p\n", arr);		// ��� : �ּҰ�
	printf("*arr = %d\n", *arr);	// ��� : �迭 ù��° ��

	// ������ ���� ( +, - ) ����
	printf("arr + 1 = %p, *(arr + 1) = %d, arr[1] = %d\n", arr + 1, *(arr + 1), arr[1]);	// ��� : �迭 �ι�° �ּ�, �迭 �ι�° ��
	printf("arr + 2 = %p, *(arr + 2) = %d, arr[2] = %d\n", arr + 2, *(arr + 2), arr[2]);	// ��� : �迭 ����° �ּ�, �迭 ����° ��

	// �� ���� : * ���������� �켱������ �Ϲ����� ��������ں��� �켱������ ����.
	printf("*(arr + 1) = %d, *arr + 1 = %d\n", *(arr + 1), *arr + 1);	// ��� : arr[1] �� ��, arr[0] + 1 �� ��

	printf("\n�ƹ�Ű�� �Է��ϸ� ���α׷��� �����մϴ�.\n");
	_getch();
	return 0;
} // end main