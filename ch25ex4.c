#include<stdio.h>

void change_datas(int n1, int *n2, float arr[]);

int main()

{
    int i;
    int n1=10, n2=20;
    float arr[5]={1.5,2.5,3.5,4.5,5.5};

    //n1�� �� ����, n2, arr�� �ּ� ����
    change_datas(n1, &n2, arr);

    printf("�Լ� ȣ�� ��, ������ ��ȭ ======\n");
    printf("n1: %d, n2: %d\n", n1, n2);
    for(i=0; i<5; i++){
        printf("arr[%d]: %.1f\n", i, arr[i]);
    }
    return 0;
}

void change_datas(int n1, int *n2, float arr[])
{
    int i;
    n1=50; //�ּ� �������� �ʰ� ���� �ٲٸ� ���� �� ��
    *n2=500;
    for(i=0; i<5; i++){
        arr[i]=arr[i]+10;
    }
}
