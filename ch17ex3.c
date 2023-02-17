#include <stdio.h>
int main()

{
    int i, max, max_index;
    int score[5]={10,5,8,20,16};
    int ass[5]={7,2,10,15,9};
    max=0; //최대값 초기화
    max_index=0;

    for(i=0; i<5; i++){
        if(score[i]>max){
            max=score[i];
            max_index=i;
        }
    }
    printf("최다득점 경기: %d번째, 득점: %d점, 어시스트: %d회", max_index+1, max, ass[max_index]);

    return 0;
}
