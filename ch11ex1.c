//ch11ex1

#include <stdio.h>
int main()

{
    int num;
    printf("������ �Է���: ");
    scanf("%d", &num);

    printf("%d�� %s", num, num%2==0 ? "¦��":"Ȧ��");
    return 0;
}
