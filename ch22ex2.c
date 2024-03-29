#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int i, cnt; //난수 개수
    int *random_ptr; //난수를 저장할 메모리 공간의 주소 저장

    printf("몇 개의 난수를 생성할까요? ");
    scanf("%d", &cnt);

    //seed 값 설정
    srand((unsigned int) time(NULL));

    //메모리 할당
    random_ptr=(int*)malloc(cnt*sizeof(int));

    if (random_ptr==NULL){
        printf("메모리 할당 실패");
        exit(1);
    }
    for(i=0;i<cnt;i++){
        random_ptr[i]=rand()%500+1; //1~500 사이의 난수 생성 및 저장
        printf("%d ", random_ptr[i]);
    }
    free(random_ptr);
    return 0;
}
