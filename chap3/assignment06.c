#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float m;

	printf("아파트의 면적(제곱미터)?\n", &m);

	scanf("%f", &m);

	printf("%.2f 제곱미터 = %.2f", m, 0.3025 * m);

	return 0;

}