//ch7lab2.c

#include <stdio.h>
int main()

{
    int num1, num2, num3, sum;
    printf("���� 3���� �Է��ϼ���: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum=(num1+num2)*num3;
    printf("(%d+%d)*%d = %d �Դϴ�.", num1, num2, num3, sum);

    return 0;
}
