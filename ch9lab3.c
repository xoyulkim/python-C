//ch9lab3.c

#include <stdio.h>
int main()

{
    float score;
    printf("�� �� ���̾�? ");
    scanf("%f", &score);

    if (score>=90) {
        printf("���߳�");
    }
    else if (score>=80) {
        printf("�±�");
    }
    else if (score>=70) {
        printf("�����");
    }
    else if (score>=70) {
        printf("�۽�");
    }
    else {
        printf("�� ��û��");
    }

    return 0;
}
