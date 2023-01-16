//ch7ex3.c

#include <stdio.h>
int main()
{
    int num1=9, num2=2;

    printf("%d+%d=%d\n", num1, num2, num1+num2);
    printf("%d-%d=%d\n", num1, num2, num1-num2);
    printf("%d*%d=%d\n", num1, num2, num1*num2);
    printf("%d/%d=%d\n", num1, num2, num1/num2);
    printf("%d%%%d=%d\n", num1, num2, num1%num2);     // %를 출력하기 위해서 %% 함

    return 0;
}
