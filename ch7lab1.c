//ch7lab1.c

#include <stdio.h>
int main()

{
    int first_num, second_num, sum, last;
    printf("첫 번째 정수는? ");
    scanf("%d", &first_num);
    printf("두 번째 정수는? ");
    scanf("%d", &second_num);

    sum=first_num/second_num;
    last=first_num%second_num;
    printf("몫은 %d입니다.\n 나머지는 %d입니다.", sum, last);

    return 0;
}
