#include<stdio.h>
#include<string.h>

void change_msg(char msg[]);

int main()

{
    char msg[10]="Avengers";

    change_msg(msg); //배열의 주소 전달
    printf("%s", msg);
    return 0;
}

void change_msg(char msg[]) //(char *msg)랑 같음
{
    strcpy(msg, "XXXXXXXX");
}
