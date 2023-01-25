//ch11lab1.c

#include <stdio.h>
int main()

{
    int num1, num2,a,b,n;
    printf("정수 두 개를 적어: ");
    scanf("%d%d", &num1, &num2);

    printf("%d", (num1>num2)?num1-num2:num2-num1);
    return 0;
}
