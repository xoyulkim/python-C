#include <stdio.h>
int main()

{
    int age=20;
    int *age_ptr =&age; //������ ���� ���� �� �ʱ�ȭ

    printf("age������ ��: %d, %d\n", age, *age_ptr);
    printf("age������ �ּ�: %x, %x\n", &age, age_ptr);
    return 0;
}
