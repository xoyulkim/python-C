#include<stdio.h>
#include<string.h>
int main()

{
    char str1[21], str2[21];
    int ret;

    puts("ù���� ���ڿ� �Է��ϼ���: ");
    gets(str1);

    puts("�ι��� ���ڿ� �Է��ϼ���:");
    gets(str2);

    ret=strcmp(str1, str2);

    if(ret==0){
        printf("�� ���ڿ��� ����");
    }
    else if(ret<0){
        printf("ù���� ���ڿ��� �����˻������� ����");
    }
    else{
        printf("�ι��� ���ڿ��� ��ǰ˻������� ����");
    }
    return 0;
}
