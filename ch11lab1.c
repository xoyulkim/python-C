//ch11lab1.c

#include <stdio.h>
int main()

{
    int num1, num2,a,b,n;
    printf("���� �� ���� ����: ");
    scanf("%d%d", &num1, &num2);

    printf("%d", (num1>num2)?num1-num2:num2-num1);
    return 0;
}
