#include<stdio.h>

int main()

{
    int i, j;
    int arr[4][4]={0};

    for (i=0; i<3; i++){
            printf("%d��° �л��� ������ ������ ������� �Է��ϼ���: ", i+1);
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //�л��� ���� �հ�
    for(i=0;i<3; i++){
        for(j=0;j<3;j++){
            arr[i][3]=arr[i][3]+arr[i][j];
        }
    }

    //���� ���� �հ�
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            arr[3][j]=arr[3][j]+arr[i][j];
        }
    }

    printf("==========================================\n");
    printf("\t����\t����\t����\t����\n");
     for(i=0;i<4; i++){
        if(i<3)printf("�л�: %d", i+1);
        else printf("����: ");
        for(j=0;j<4;j++){
            printf("\t%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
