// ch5lab1.c

#include <stdio.h>
#include "ch5ex1.h" //or #define PI 3.14

int main()
{
    float half=5.0, dool=2*half*PI, nub=half*half*PI;
    printf("�������� %.1f�� ���� �ѷ��� %.1f�Դϴ�\n", half, dool);
    printf("�������� %.1f�� ���� ���̴� %.1f�Դϴ�", half, nub);

    return 0;
}
