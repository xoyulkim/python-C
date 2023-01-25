//ch11ex1

#include <stdio.h>
int main()

{
    int num;
    printf("정수를 입력해: ");
    scanf("%d", &num);

    printf("%d는 %s", num, num%2==0 ? "짝수":"홀수");
    return 0;
}
