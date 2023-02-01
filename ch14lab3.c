#include <stdio.h>
int main()

{
    int n;
    int r;
    int sum=1;
    int i;

    printf("정수의 값을 입력하세요: ");
    scanf("%d", &n);
    printf("거듭제곱횟수를 입력하세요: ");
    scanf("%d", &r);

    for(i=1; i<=r; i++){
        sum=sum*n;
    }
    printf("%d의 %d승은 %d입니다", n, r, sum);
    return 0;
}
