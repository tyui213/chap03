#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int w, l;

	printf("������ ����?\n");
	scanf("%d", &w);

	printf("������ ����?\n");
	scanf("%d", &l);

	printf("���簢���� ����:%d\n", w * l);
	printf("���簢���� �ѷ�:%d\n", (w + l) * 2);

	return 0;
}