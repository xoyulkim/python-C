#include<stdio.h>

void get_twice(int *num_ptr);

int main()

{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);

    get_twice(&num); //num�� �ּ� ����
    printf("In main, num=%d\n", num);
    return 0;
}

void get_twice(int *num_ptr)
{
    *num_ptr=*num_ptr *2;
    printf("In get_twice(), *num_ptr=%d\n", *num_ptr);
}
