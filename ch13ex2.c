//ch13ex2.c

#include <stdio.h>
int main()

{
    int num;
    int sum=0;

    printf("���� �Է�: ");
    scanf("%d", &num);

    while (num>0){
        sum += (num%10);
        num/=10;
    }
    printf("�� �ڸ� ���� �հ�: %d", sum);
    return 0;
}
