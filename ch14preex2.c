#include <stdio.h>
int main()

{
    int n, sum=0;

    printf("n을 입력하세요: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("1~%d까지의 누적합: %d", n, sum);
    return 0;

}
