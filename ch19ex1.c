#include <stdio.h>
#include <string.h>
int main()

{
    int i;
    char add[50];

    puts("영문 주소를 입력하세요: ");
    gets(add);

    for(i=strlen(add)-1; i>=0; i--){
        putchar(add[i]);
    }
    return 0;
}
