#include<stdio.h>

void get_twice(int *num_ptr);

int main()

{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    get_twice(&num); //num의 주소 전달
    printf("In main, num=%d\n", num);
    return 0;
}

void get_twice(int *num_ptr)
{
    *num_ptr=*num_ptr *2;
    printf("In get_twice(), *num_ptr=%d\n", *num_ptr);
}
