#include<stdio.h>

int get_yaksu(int n);

int main()

{
    int n, cnt, i;

    printf("����� ���� ������ �Է��ϼ���: ");
    scanf("%d", &n);

    cnt=get_yaksu(n);

    printf("%d�� ����� ������ %d���Դϴ�", n, cnt);

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
