#include <stdio.h>
int main()

{
    char op;
    printf("10과 5의 연산을 선택해(+,-,*,/,%%): ");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        printf("10 %c 5는 %d입니다", op, 10+5);
        break;
    case '-':
        printf("10 %c 5는 %d입니다", op, 10-5);
        break;
    case '*':
        printf("10 %c 5는 %d입니다", op, 10*5);
        break;
    case '/':
        printf("10 %c 5는 %d입니다", op, 10/5);
        break;
    case '%':
        printf("10 %c 5는 %d입니다", op, 10%5);
        break;
    default:
        printf("잘못된 연산자입니다");
        break;
    }
    return 0;
}
