#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main() {

	double n, m;

	printf("��(n)?\n", &n);
	scanf("%lf", &n);

	printf("�̵��Ÿ�(m)?\n", &m);
	scanf("%lf", &m);

	printf("���� ��: %lf J", n*m);

	return 0;
}