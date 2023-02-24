#include<stdio.h>

int get_max(int n1, int n2);

int main()

{
    int n1, n2, max;

    printf("두 수를 입력하세여: ");
    scanf("%d%d", &n1, &n2);

    max = get_max(n1, n2);
    printf("두 수 중에 큰 값은 %d입니다", max);

    return 0;
}

int get_max(int n1, int n2)
{
    int max;
     if(n1<n2){
        max=n2;
    }
    else{
        max=n1;
    }
    return max;
}
