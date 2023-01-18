//ch7lab2.c

#include <stdio.h>
int main()

{
    int num1, num2, num3, sum;
    printf("정수 3개를 입력하세요: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum=(num1+num2)*num3;
    printf("(%d+%d)*%d = %d 입니다.", num1, num2, num3, sum);

    return 0;
}
