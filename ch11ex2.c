//ch11ex2.c

#include <stdio.h>
int main()

{
    int n1, n2, big, small;

    printf("정수 두 개를 입력해: ");
    scanf("%d%d", &n1, &n2);

    big=(n1>n2)?n1:n2;       //if (n1>n2)
                             //  big=n1

    small=(n1<n2)?n1:n2;

    printf("정수 %d가 %d보다 작아", small, big);
    return 0;
}
