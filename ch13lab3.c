//ch13lab3.c

#include <stdio.h>
int main()

{
    int num;
    int cnt=1;
    int sum=1;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    while (cnt<=num){
        sum=sum*cnt;
        cnt++;
    }
    printf("%d�Դϴ�", sum);
    return 0;
}
