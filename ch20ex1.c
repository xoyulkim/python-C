#include <stdio.h>
int main()

{
    int num1=10, num2=20;
    int *int_ptr;

    char ch='a';
    char *ch_ptr; //������ ���� ����
    ch_ptr=&ch;   //������ �Լ��� �� �ֱ�
    printf("����: %c\n", *ch_ptr);

    float f=3.14;
    float *f_ptr;
    f_ptr=&f;
    printf("���� ����: 2.%f\n", *f_ptr);

    int_ptr=&num1;
    *int_ptr=30;
    printf("num1: %d, num2: %d, *int_ptr: %d\n", num1, num2, *int_ptr);

    num2=*int_ptr;
    int_ptr=&num2;
    printf("num1: %d, num2: %d, *int_ptr: %d\n", num1, num2, *int_ptr);

    return 0;
}
