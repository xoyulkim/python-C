//ch9lab2.c

#include <stdio.h>
int main()

{
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    if (num%2==1)
        printf("%d�� Ȧ���Դϴ�", num);
    else
        printf("%d�� ¦���Դϴ�", num);

    return 0;

}
