//ch13lab2.c

#include <stdio.h>
int main()

{
    int num;
    int sum=0;
    int cnt=1;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    while (cnt<=num){
        sum=sum+cnt;
        cnt++;
    }
    printf("1~%d������ �հ�� %d", num, sum);
    return 0;
}
