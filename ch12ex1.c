//ch12ex1.c

#include <stdio.h>
int main()

{
    int score;

    printf("����: ");
    scanf("%d", &score);

    switch(score/10)
    {
    case 9: case 10:
        printf("A���� �Դϴ�");
        break;
    case 8:
        printf("B���� �Դϴ�");
        break;
    case 7:
        printf("C���� �Դϴ�");
        break;
    case 6:
        printf("D���� �Դϴ�");
        break;
    default:
        printf("F���� �Դϴ�");
        break;
    }
    return 0;
}
