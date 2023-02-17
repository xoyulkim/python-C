#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int i, max=0, min=100; //max=min=arr[0]도 가능함 ^^77
    int arr[10];
    srand((unsigned int)time(NULL));

    for(i=0; i<10; i++){
        arr[i]=rand()%100;
        printf("%d ", arr[i]);

        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n최대값은 %d, 최소값은 %d입니다", max, min);
    return 0;
}
