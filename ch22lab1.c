#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i, num, total=0;
    float avg=1;
    int *ptr;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &num);

    ptr=(int*)malloc(num*sizeof(int));

    if (ptr==NULL){ //메모리 할당 실패
        printf("메모리 할당 실패");
        exit(1);
    }
    else { //메모리 할당 성공
        for (i=0;i<num;i++){
            printf("%d번째 학생의 점수를 입력하세요: \n", i+1);
            scanf("%d", &ptr[i]);
            total=total+ptr[i];
        }
        avg=(float)total/num;
        printf("학생들의 총점은 %d점이고 평균은 %.1f점입니다", total, avg);
        free(ptr); //메모리 해제
    }
    return 0;
}
