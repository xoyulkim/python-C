#include <stdio.h>
int main()

{
    char month[10]="September"; //���� �� �ʱ�ȭ�� ���ÿ� �� ���� ������ ����

    printf("%s\n", month);
    month[0]='A';
    month[1]='p';
    month[2]='r';
    month[3]='i';
    month[4]='l';
    month[5]='\0';       //�ƴϸ� strcpy(month, "April);�� ���� ��, #include <string.h> �ʼ�

    printf("%s\n", month);
    return 0;
}
