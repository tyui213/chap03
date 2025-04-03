#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long mass, height;

	printf("질량(kg)?\n", &mass);
	scanf("%d", &mass);

	printf("높이(m)?\n");
	scanf("%d", &height);

	printf("위치에너지: %f J", 9.8 * mass * height);

	return 0;
}