#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int s;

	printf("�� ���� ����?\n", &s);
	scanf("%d", &s);

	printf("���簢���� ����: %d\n", s * s);
	printf("���簢���� �ѷ�: %d\n", 4 * s);

	return 0;
	
}