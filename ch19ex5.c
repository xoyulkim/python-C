#include<stdio.h>

int main()

{
    int i, j;
    int arr[4][4]={0};

    for (i=0; i<3; i++){
            printf("%d번째 학생의 국영수 점수를 순서대로 입력하세요: ", i+1);
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //학생별 총점 합계
    for(i=0;i<3; i++){
        for(j=0;j<3;j++){
            arr[i][3]=arr[i][3]+arr[i][j];
        }
    }

    //과목별 총점 합계
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            arr[3][j]=arr[3][j]+arr[i][j];
        }
    }

    printf("==========================================\n");
    printf("\t국어\t영어\t수학\t총점\n");
     for(i=0;i<4; i++){
        if(i<3)printf("학생: %d", i+1);
        else printf("총점: ");
        for(j=0;j<4;j++){
            printf("\t%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
