#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int a;
    printf("�� ���� ����? ");

    scanf("%d", &a);

    // ���̿� �ѷ� ���
    printf("���簢���� ����: %d\n", a * a);
    printf("���簢���� �ѷ�: %d\n", a * 4);

    return 0;
}