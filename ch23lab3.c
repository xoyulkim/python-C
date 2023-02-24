#include<stdio.h>
#include <string.h>

struct st_info{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct st_info st;
    struct st_info end;
    struct st_info diff;

    printf("시작 시각 시 분 초를 입력하세요: ");
    scanf("%d%d%d", &st.hour, &st.min, &st.sec);

    printf("종료 시각 시 분 초를 입력하세요: ");
    scanf("%d%d%d", &end.hour, &end.min, &end.sec);

    //초 차이 구하기
    if(end.sec<st.sec){
        end.min--;
        end.sec+=60;
    }
    diff.sec=end.sec-st.sec;

    //분 차이 구하기
    if(end.min<st.min){
        end.hour--;
        end.min+=60;
    }
    diff.min=end.min-st.min;

    //시 차이 구하기
    diff.hour=end.hour-st.hour;

    printf("종료 시각과 시작 시각의 차이는 %02d:%02d:%02d입니다", diff.hour, diff.min, diff.sec);

    return 0;

}

