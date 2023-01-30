//ch13lab3.c

#include <stdio.h>
int main()

{
    int num;
    int cnt=1;
    int sum=1;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    while (cnt<=num){
        sum=sum*cnt;
        cnt++;
    }
    printf("%d입니다", sum);
    return 0;
}
