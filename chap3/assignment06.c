#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float m;

	printf("����Ʈ�� ����(��������)?\n", &m);

	scanf("%f", &m);

	printf("%.2f �������� = %.2f", m, 0.3025 * m);

	return 0;

}