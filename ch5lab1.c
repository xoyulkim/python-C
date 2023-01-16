// ch5lab1.c

#include <stdio.h>
#include "ch5ex1.h" //or #define PI 3.14

int main()
{
    float half=5.0, dool=2*half*PI, nub=half*half*PI;
    printf("반지름이 %.1f인 원의 둘레는 %.1f입니다\n", half, dool);
    printf("반지름이 %.1f인 원의 넓이는 %.1f입니다", half, nub);

    return 0;
}
