#include <stdio.h>

int main()
{
	// ���ڿ� ����
	// �ִ� 20���� ���ڸ� ���� �� �ִ� char �迭 <-- ���ڿ��� ��´�.
	char str1[20] = "C language";

	// %s : ���ڿ� ���
	printf("str1 = %s\n", str1);
	
	// �ڵ����� �ʱ�ȭ, ���ڿ��� ���� ������ŭ�� ũ��� �����ȴ�.
	char str2[] = "Java language";
	printf("str2 = %s\n", str2);

	// ������ ���
	char *str3 = "Python language";
	printf("str3 = %s\n", str3);


	getchar();
}