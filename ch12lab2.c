#include <stdio.h>
int main()

{
    char op;
    printf("10�� 5�� ������ ������(+,-,*,/,%%): ");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        printf("10 %c 5�� %d�Դϴ�", op, 10+5);
        break;
    case '-':
        printf("10 %c 5�� %d�Դϴ�", op, 10-5);
        break;
    case '*':
        printf("10 %c 5�� %d�Դϴ�", op, 10*5);
        break;
    case '/':
        printf("10 %c 5�� %d�Դϴ�", op, 10/5);
        break;
    case '%':
        printf("10 %c 5�� %d�Դϴ�", op, 10%5);
        break;
    default:
        printf("�߸��� �������Դϴ�");
        break;
    }
    return 0;
}
