#include<stdio.h>

int get_sum(int n);

int main()

{
    int n, sum, i;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    sum=get_sum(n);

    printf("1~%d������ �հ�� %d�Դϴ�", n, sum);

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
