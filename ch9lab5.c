//ch9lab5.c

#include <stdio.h>
int main()

{
    int hour, min, past_min;
    printf("지금 몇 시 몇 분이야? ");
    scanf("%d:%d", &hour, &min);

    past_min=min-30;
    if (past_min>=0)
        printf("30분 전은 %02d:%02d", hour, past_min);

    else if (past_min<0)
        printf("30분 전은 %02d:%02d", hour-1, min+30);
                          //%02d는 두 자리 수는 잡아놓고
                          //두 자리 수 안 되면 0으로 채움
    return 0;
}

//if(min<30) {
//    hour-=1;
//    min+=60;
//}
//min-=30;
