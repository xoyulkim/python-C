#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i, n;
    int *ptr;

    printf("몇 개의 정수를 저장할까요? ");
    scanf("%d", &n);

    ptr=(int*)malloc(n*sizeof(int));

    if (ptr==NULL){ //메모리 할당 실패
        printf("메모리 할당 실패");
        exit(1);
    }
    else { //메모리 할당 성공
        for(i=0;i<n;i++){ //사용자가 원하는 개수만큼 반복
            ptr[i]=i*10; //0,10,20 ... 저장하기
        }
        for (i=0;i<n;i++){
            printf("%d ", ptr[i]);
        }
        free(ptr); //메모리 해제
    }
    return 0;
}
