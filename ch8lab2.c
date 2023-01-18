//ch8lab2.c

#include<stdio.h>
int main()

{
    int sum=93;
    double avg;

    avg=sum/5;
    printf("avg=%.1f\n", avg);

    avg=(double)sum/5;
    printf("avg=%.1f\n", avg);

    return 0;
}
