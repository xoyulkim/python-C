#include<stdio.h>

int get_yaksu(int n);

int main()

{
    int n, cnt, i;

    printf("약수를 구할 정수를 입력하세요: ");
    scanf("%d", &n);

    cnt=get_yaksu(n);

    printf("%d의 약수의 개수는 %d개입니다", n, cnt);

    return 0;
}

int get_yaksu(int n)
{
    int cnt;

    for(int i=1; i<=n; i++){
        if (n%i==0){
            cnt=cnt+1;
        }
    }
    return cnt;
}
