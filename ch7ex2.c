//ch7ex2.c

#include <stdio.h>
int main()

{
    int a=10, b=3, i_result;
    float x=10.0, y=3.0, f_result;

    f_result=x/y;
    printf("f_result=%.1f\n", f_result);

    f_result=x/b;    //�Ǽ��� ������ ������ -> ������ �Ǽ��� ��ȯ�Ǿ� �Ǽ� �������� ��
    printf("f_result=%.1f\n", f_result);

    i_result=a/y;    //������ �Ǽ��� ������ -> ����� ���������� �����ؼ� �Ҽ��� �ڰ� �߸�
    printf("i_result=%d\n", i_result);

    f_result=a/b;    // ���������� ������ -> ����� �Ǽ� ������ ����
    printf("f_result=%.1f\n", f_result);


    return 0;

}
