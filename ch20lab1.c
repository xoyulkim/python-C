#include <stdio.h>
int main()

{
    int a=30;
    int *pX, *pY;
    pX=&a;
    pY=&a;
    *pY=*pY+5;
    printf("%d, %d, %d", *pX, *pY, a);    //pY�� a�� ����Ű�� �ִµ� pY ���� �ٲ�������� pX, a�� �� ��� �ٲ�

    return 0;

}
