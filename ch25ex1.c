#include <stdio.h>
void get_twice(int num);
int main()

{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);

    get_twice(num);
    printf("in main(), num= %d\n", num);
    return 0;
}

void get_twice(int num)
{
    num=num*2;
    printf(" in get_twice(), num=%d\n", num);
}
