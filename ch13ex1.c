//ch13ex1.c

#include <stdio.h>
int main()

{
    int num;
    int cnt;
    int sum=0;

    cnt=0;
    sum=0;
    while (cnt<3){
        printf("������ �Է��ϼ���: ");
        scanf("%d", &num);
        sum+=num;
        cnt ++;
    }

    printf("�հ�� %d�Դϴ�", sum);
    return 0;
}
