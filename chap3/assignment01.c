#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int s;

	printf("한 변의 길이?\n", &s);
	scanf("%d", &s);

	printf("정사각형의 넓이: %d\n", s * s);
	printf("정사각형의 둘레: %d\n", 4 * s);

	return 0;
	
}