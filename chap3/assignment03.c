#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long mass, height;

	printf("����(kg)?\n", &mass);
	scanf("%d", &mass);

	printf("����(m)?\n");
	scanf("%d", &height);

	printf("��ġ������: %f J", 9.8 * mass * height);

	return 0;
}