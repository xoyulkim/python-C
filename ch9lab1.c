//ch9lab1.c

#include <stdio.h>
int main()

{
    int a,b;
    printf("���� 2���� �Է��ϼ���: ");
    scanf("%d%d", &a, &b);

    if (a>b)
        printf("%d�� �� Ů�ϴ�.",a);
    else
        printf("%d�� �� Ů�ϴ�.",b);

    return 0;
}
