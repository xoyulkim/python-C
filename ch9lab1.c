//ch9lab1.c

#include <stdio.h>
int main()

{
    int a,b;
    printf("정수 2개를 입력하세요: ");
    scanf("%d%d", &a, &b);

    if (a>b)
        printf("%d이 더 큽니다.",a);
    else
        printf("%d이 더 큽니다.",b);

    return 0;
}
