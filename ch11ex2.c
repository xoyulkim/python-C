//ch11ex2.c

#include <stdio.h>
int main()

{
    int n1, n2, big, small;

    printf("���� �� ���� �Է���: ");
    scanf("%d%d", &n1, &n2);

    big=(n1>n2)?n1:n2;       //if (n1>n2)
                             //  big=n1

    small=(n1<n2)?n1:n2;

    printf("���� %d�� %d���� �۾�", small, big);
    return 0;
}
