#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int kor, eng, math;
	printf("���� ���� �Է� : ");
	scanf("%d", &kor);	// ���� �� �� �Է� -> kor ������ ����
	
	printf("���� ���� �Է� : ");
	scanf("%d", &eng);	// ���� �� �� �Է� -> eng ������ ����
	
	printf("���� ���� �Է� : ");
	scanf("%d", &math);	// ���� �� �� �Է� -> math ������ ����
						// ������ �տ� & ���̱�!

	printf("�Է��Ͻ� ������ %d, %d, %d �Դϴ�.\n", kor, eng, math);

	getchar();
	getchar();
}