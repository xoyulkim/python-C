//ch6lab2.c

#include <stdio.h>
int main()

{
    float tem, yes_tem;
    printf("���� ������ �� ������? ");
    scanf("%f", &tem);
    printf("���� ������ �� ��������? ");
    scanf("%f", &yes_tem);

    printf("������ %.1f������, ������ %.1f���̱���~", tem, yes_tem);

    return 0;
}
