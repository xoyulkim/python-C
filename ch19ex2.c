#include<stdio.h>
#include<string.h>
int main()

{
    char str1[20]="�ȳ��ϼ���";
    char str2[30]="hello!";

    strcat(str1,str2);     //str1���� str2 ���̱�
    printf("str1=%s, str2=%s", str1, str2);

    return 0;
}
