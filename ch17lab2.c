#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int i, max=0, min=100; //max=min=arr[0]�� ������ ^^77
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
    printf("\n�ִ밪�� %d, �ּҰ��� %d�Դϴ�", max, min);
    return 0;
}
