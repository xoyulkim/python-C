//ch13lab2.c

#include <stdio.h>
int main()

{
    int num;
    int sum=0;
    int cnt=1;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    while (cnt<=num){
        sum=sum+cnt;
        cnt++;
    }
    printf("1~%d까지의 합계는 %d", num, sum);
    return 0;
}
