//ch9lab4.c

#include <stdio.h>
int main()

{
    int time;
    printf("���� �� �þ�? ");
    scanf("%d", &time);

    if (time<=10)
        printf("�¸��");
    else if (time<=20)
        printf("�µ���");
    else
        printf("���̺��");

    return 0;
}
