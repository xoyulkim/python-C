//ch9lab5.c

#include <stdio.h>
int main()

{
    int hour, min, past_min;
    printf("���� �� �� �� ���̾�? ");
    scanf("%d:%d", &hour, &min);

    past_min=min-30;
    if (past_min>=0)
        printf("30�� ���� %02d:%02d", hour, past_min);

    else if (past_min<0)
        printf("30�� ���� %02d:%02d", hour-1, min+30);
                          //%02d�� �� �ڸ� ���� ��Ƴ���
                          //�� �ڸ� �� �� �Ǹ� 0���� ä��
    return 0;
}

//if(min<30) {
//    hour-=1;
//    min+=60;
//}
//min-=30;
