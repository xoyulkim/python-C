#include <stdio.h>
int main()

{
    int n, sum=0;

    printf("n�� �Է��ϼ���: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("1~%d������ ������: %d", n, sum);
    return 0;

}
