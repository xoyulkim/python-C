#include<stdio.h>

void swap(int *x, int *y);

int main()

{
    int x=10, y=20;
    int a;

    swap(&x, &y);
    printf("x=%d, y=%d", x,y);

    return 0;
}

void swap(int *x, int *y)
{
    int a;
    a=*x;
    *x=*y;
    *y=a;
}

