#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()

{
    int i, avg=0, total=0;
    int arr[10];

    srand((unsigned int)time(NULL));
    for(i=0; i<9; i++){
        arr[i]=rand()%100;
        printf("%d \n", arr[i]);
        total=total+arr[i];
    }
    avg=total/10;
    printf("ЦђБе: %d", avg);
    return 0;
}
