//ch13ex2.c

#include <stdio.h>
int main()

{
    int num;
    int sum=0;

    printf("정수 입력: ");
    scanf("%d", &num);

    while (num>0){
        sum += (num%10);
        num/=10;
    }
    printf("각 자리 수의 합계: %d", sum);
    return 0;
}
