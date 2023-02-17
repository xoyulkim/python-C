#include <stdio.h>
int main()

{
    int arr[5]={10,20,30,40,50};
    int *arr_ptr=arr; //&arr[0]

    *arr_ptr=*arr_ptr+1;
    printf("%d\n", *arr_ptr);

    arr_ptr++; //arr[1]을 가르키게 하는 것
    *arr_ptr=*arr_ptr+1;
    printf("%d\n", *arr_ptr);

    arr_ptr++;
    *arr_ptr=*arr_ptr+1;
    printf("%d\n", *arr_ptr);

    arr_ptr++;
    *arr_ptr=*arr_ptr+1;
    printf("%d\n", *arr_ptr);

    arr_ptr++;
    *arr_ptr=*arr_ptr+1;
    printf("%d\n", *arr_ptr);


    // for(int i=0; i<5; i++){
    //      *arr_ptr+=1;
    //      printf("%d", *arr_ptr);
    //      arr_ptr++;
 //   }
    return 0;

}
