#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int width, length;

	printf("������ ����?");
	scanf("&d", &width);
	printf("������ ����?");
	scanf("%d", &length);
	
	printf("���簢���� ����: %d", width * length);
	return 0;
}