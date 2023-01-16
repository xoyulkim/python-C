//ch7ex2.c

#include <stdio.h>
int main()

{
    int a=10, b=3, i_result;
    float x=10.0, y=3.0, f_result;

    f_result=x/y;
    printf("f_result=%.1f\n", f_result);

    f_result=x/b;    //실수와 정수의 나눗셈 -> 정수가 실수로 변환되어 실수 나눗셈이 됨
    printf("f_result=%.1f\n", f_result);

    i_result=a/y;    //정수와 실수의 나눗셈 -> 결과를 정수변수에 저장해서 소수점 뒤가 잘림
    printf("i_result=%d\n", i_result);

    f_result=a/b;    // 정수끼리의 나눗셈 -> 결과를 실수 변수에 저장
    printf("f_result=%.1f\n", f_result);


    return 0;

}
