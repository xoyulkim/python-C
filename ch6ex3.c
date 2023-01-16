// ch6ex3.c

#include <stdio.h>
int main()

{
    char first, second;

    printf("이름의 이니셜을 한 글자만 입력해: ");
    scanf("%c", &first);

    printf("성의 이니셜을 첫 글자만 입력: ");
    scanf(" %c", &second); //%c앞에 공백 두기      %c만 엔터를 문자로 읽어들이기 때문 %d,%f는 상관 X

    printf("당신의 이름은 %c, %c입니다", first, second);

    return 0;
}
