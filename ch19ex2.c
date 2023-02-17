#include<stdio.h>
#include<string.h>
int main()

{
    char str1[20]="안녕하세요";
    char str2[30]="hello!";

    strcat(str1,str2);     //str1끝에 str2 붙이기
    printf("str1=%s, str2=%s", str1, str2);

    return 0;
}
