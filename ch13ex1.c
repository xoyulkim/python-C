//ch13ex1.c

#include <stdio.h>
int main()

{
    int num;
    int cnt;
    int sum=0;

    cnt=0;
    sum=0;
    while (cnt<3){
        printf("정수를 입력하세요: ");
        scanf("%d", &num);
        sum+=num;
        cnt ++;
    }

    printf("합계는 %d입니다", sum);
    return 0;
}
