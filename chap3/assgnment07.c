#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	double a;
	printf("½Ç¼ö?\n", &a);
	scanf("%lf", &a);

	printf("Á¦°ö: %e", a * a);
	printf("¼¼Á¦°ö: %e", a * a * a);

	return 0;
}