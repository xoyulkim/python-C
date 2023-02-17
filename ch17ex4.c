#include <stdio.h.>
int main()

{
    int i, j, temp;
    int arr[5]={93,73,50,16,32};

    //오름차순 정렬
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){//4,3,2,1회 반복
            if(arr[j]>arr[j+1]){//앞 데이터가 더 크다면 교환
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
