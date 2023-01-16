//ch6lab1.c

#include <stdio.h>
int main()

{
    char lang;
    int hard;

    printf("배우는 언어는? ");
    scanf("%c", &lang);
    printf("느끼는 난이도는? ");
    scanf("%d", &hard);

    printf("당신은 %c를 배우면서 %d 정도 어렵다고 느끼시는군요!", lang, hard);

    return 0;
}
