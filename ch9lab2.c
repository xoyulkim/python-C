//ch9lab2.c

#include <stdio.h>
int main()

{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num%2==1)
        printf("%d는 홀수입니다", num);
    else
        printf("%d는 짝수입니다", num);

    return 0;

}
