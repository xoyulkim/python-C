#include <stdio.h.>
int main()

{
    int i, j, temp;
    int arr[5]={93,73,50,16,32};

    //�������� ����
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){//4,3,2,1ȸ �ݺ�
            if(arr[j]>arr[j+1]){//�� �����Ͱ� �� ũ�ٸ� ��ȯ
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
