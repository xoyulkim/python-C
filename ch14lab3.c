#include <stdio.h>
int main()

{
    int n;
    int r;
    int sum=1;
    int i;

    printf("������ ���� �Է��ϼ���: ");
    scanf("%d", &n);
    printf("�ŵ�����Ƚ���� �Է��ϼ���: ");
    scanf("%d", &r);

    for(i=1; i<=r; i++){
        sum=sum*n;
    }
    printf("%d�� %d���� %d�Դϴ�", n, r, sum);
    return 0;
}
