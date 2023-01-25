//ch12ex1.c

#include <stdio.h>
int main()

{
    int score;

    printf("성적: ");
    scanf("%d", &score);

    switch(score/10)
    {
    case 9: case 10:
        printf("A학점 입니다");
        break;
    case 8:
        printf("B학점 입니다");
        break;
    case 7:
        printf("C학점 입니다");
        break;
    case 6:
        printf("D학점 입니다");
        break;
    default:
        printf("F학점 입니다");
        break;
    }
    return 0;
}
