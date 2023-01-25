#include <stdio.h>
int main()

{
    int num;

    printf("정수 입력해: ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    default:
        printf("잘못 입력함");
        break;
    }
    return 0;
}
