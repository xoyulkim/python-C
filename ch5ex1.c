// ch5ex1.c

#include <stdio.h>
#include "ch5ex1.h"
int main()

{
    int age=10;
    char first_initial='Y', last_initial='S';

    printf("�� ģ�� ������ %s�Դϴ�\n", FAMILY_NAME);
    printf("%s ������ %d���Դϴ�\n", FAMILY_NAME, NUM_FAMILY);

    printf("ù��° ������ �̸��� %c,%c�̰�, ���̴� %d���Դϴ�\n", first_initial, last_initial, age);

    first_initial='M';
    last_initial='J';
    age=5;
    printf("�ι�° ������ �̸��� %c,%c�̰�, ���̴� %d���Դϴ�\n", first_initial, last_initial, age);

    first_initial='P';
    last_initial='Q';
    age=9876;
    printf("����° ������ �̸��� %c,%c�̰�, ���̴� %d���Դϴ�\n", first_initial, last_initial, age);


    return 0;
}
