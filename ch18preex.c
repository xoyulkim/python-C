#include <stdio.h>
int main()

{
    char month[10]="September"; //선언 및 초기화를 동시에 할 때만 가능한 문법

    printf("%s\n", month);
    month[0]='A';
    month[1]='p';
    month[2]='r';
    month[3]='i';
    month[4]='l';
    month[5]='\0';       //아니면 strcpy(month, "April);로 가능 단, #include <string.h> 필수

    printf("%s\n", month);
    return 0;
}
