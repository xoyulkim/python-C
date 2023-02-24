#include<stdio.h>

int get_sum(int n);

int main()

{
    int n, sum, i;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    sum=get_sum(n);

    printf("1~%d까지의 합계는 %d입니다", n, sum);

    return 0;
}

int get_sum(int n)
{
    int sum=0;

    for(int i=0; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}
