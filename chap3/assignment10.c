#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    double usd, krw;
	printf("USD?\n", &usd);
	scanf("%lf", &usd);

	printf("원/달러 환율?\n", &krw);
	scanf("%lf", &krw);

	printf("USD %.2f = KRW %.2f", usd, usd * krw);

	return 0;
}