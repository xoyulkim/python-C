#include <stdio.h>

void print_square(int num1, int num2);

int main()

{
    int num1, num2;

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d%d", &num1, &num2);

    print_square(num1, num2);
    printf("In main() num1=%d, num2=%d", num1, num2);

    return 0;
}

void print_square(int num1, int num2)
{
    printf("In square() num1=%d, num2=%d\n", num1*num1, num2*num2);
}
