//ch6ex2.c

#include <stdio.h>
int main()

{
    float num1, num2, num3;
    printf("�Ǽ��� �Է���: ");
    scanf("%f %f %f", &num1, &num2, &num3);     //scanf������ %.2f ��� X

    printf("�Ǽ� : %.1f, %.1f, %.1f", num1, num2, num3);

    return 0;

    //float�� �ƴ϶� double�� �ڷ��� ���� ���� �� �� (double num2;)�� ���� %f�� �ƴ� %lf(long) ���
    //ex) scanf("%lf", &num2);
}
