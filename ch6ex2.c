//ch6ex2.c

#include <stdio.h>
int main()

{
    float num1, num2, num3;
    printf("실수를 입력해: ");
    scanf("%f %f %f", &num1, &num2, &num3);     //scanf에서는 %.2f 사용 X

    printf("실수 : %.1f, %.1f, %.1f", num1, num2, num3);

    return 0;

    //float가 아니라 double로 자료형 변수 선언 할 때 (double num2;)일 때는 %f가 아닌 %lf(long) 사용
    //ex) scanf("%lf", &num2);
}
