#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int w, l;

	printf("가로의 길이?\n");
	scanf("%d", &w);

	printf("세로의 길이?\n");
	scanf("%d", &l);

	printf("직사각형의 넓이:%d\n", w * l);
	printf("직사각형의 둘레:%d\n", (w + l) * 2);

	return 0;
}