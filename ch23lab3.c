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

    printf("���� �ð� �� �� �ʸ� �Է��ϼ���: ");
    scanf("%d%d%d", &st.hour, &st.min, &st.sec);

    printf("���� �ð� �� �� �ʸ� �Է��ϼ���: ");
    scanf("%d%d%d", &end.hour, &end.min, &end.sec);

    //�� ���� ���ϱ�
    if(end.sec<st.sec){
        end.min--;
        end.sec+=60;
    }
    diff.sec=end.sec-st.sec;

    //�� ���� ���ϱ�
    if(end.min<st.min){
        end.hour--;
        end.min+=60;
    }
    diff.min=end.min-st.min;

    //�� ���� ���ϱ�
    diff.hour=end.hour-st.hour;

    printf("���� �ð��� ���� �ð��� ���̴� %02d:%02d:%02d�Դϴ�", diff.hour, diff.min, diff.sec);

    return 0;

}

