#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	double a;
	printf("�Ǽ�?\n", &a);
	scanf("%lf", &a);

	printf("����: %e", a * a);
	printf("������: %e", a * a * a);

	return 0;
}