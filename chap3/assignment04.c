#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main() {

	double n, m;

	printf("힘(n)?\n", &n);
	scanf("%lf", &n);

	printf("이동거리(m)?\n", &m);
	scanf("%lf", &m);

	printf("일의 양: %lf J", n*m);

	return 0;
}