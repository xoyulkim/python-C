//ch7lab1.c

#include <stdio.h>
int main()

{
    int first_num, second_num, sum, last;
    printf("ù ��° ������? ");
    scanf("%d", &first_num);
    printf("�� ��° ������? ");
    scanf("%d", &second_num);

    sum=first_num/second_num;
    last=first_num%second_num;
    printf("���� %d�Դϴ�.\n �������� %d�Դϴ�.", sum, last);

    return 0;
}
