#include<stdio.h>
#include<string.h>
int main()

{
    char str1[21], str2[21];
    int ret;

    puts("첫번쪠 문자열 입력하세요: ");
    gets(str1);

    puts("두번쪠 문자열 입력하세요:");
    gets(str2);

    ret=strcmp(str1, str2);

    if(ret==0){
        printf("두 문자열은 같음");
    }
    else if(ret<0){
        printf("첫번쪠 문자열이 사전검색순으로 앞임");
    }
    else{
        printf("두번쪠 문자열이 사건검색순으로 앞임");
    }
    return 0;
}
