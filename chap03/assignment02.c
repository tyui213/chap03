#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int width, length;

	printf("가로의 길이?");
	scanf("&d", &width);
	printf("세로의 길이?");
	scanf("%d", &length);
	
	printf("직사각형의 넓이: %d", width * length);
	return 0;
}