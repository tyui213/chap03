#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int a;
    printf("한 변의 길이? ");

    scanf("%d", &a);

    // 넓이와 둘레 출력
    printf("정사각형의 넓이: %d\n", a * a);
    printf("정사각형의 둘레: %d\n", a * 4);

    return 0;
}