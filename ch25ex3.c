#include<stdio.h>
#include<string.h>

void change_msg(char msg[]);

int main()

{
    char msg[10]="Avengers";

    change_msg(msg); //�迭�� �ּ� ����
    printf("%s", msg);
    return 0;
}

void change_msg(char msg[]) //(char *msg)�� ����
{
    strcpy(msg, "XXXXXXXX");
}
