// ch3lab1.c

#include <stdio.h>
int main()
{
    printf("%c언어는 %c언어에서 시작되었습니다.\n", 'C','B');
    int num=3, num1=3;
    int num2=num+num1;
    printf("%d더하기 %d은 %d입니다.\n", num, num1, num2);
    printf("빛의 속도는 %f km/s입니다.\n", 3000000.0);
    printf("%c의 아스키 값은 %d입니다.", 'A',65);

    return 0;
}

