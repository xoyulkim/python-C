// ch5ex1.c

#include <stdio.h>
#include "ch5ex1.h"
int main()

{
    int age=10;
    char first_initial='Y', last_initial='S';

    printf("제 친구 가족은 %s입니다\n", FAMILY_NAME);
    printf("%s 가족은 %d명입니다\n", FAMILY_NAME, NUM_FAMILY);

    printf("첫번째 아이의 이름은 %c,%c이고, 나이는 %d살입니다\n", first_initial, last_initial, age);

    first_initial='M';
    last_initial='J';
    age=5;
    printf("두번째 아이의 이름은 %c,%c이고, 나이는 %d살입니다\n", first_initial, last_initial, age);

    first_initial='P';
    last_initial='Q';
    age=9876;
    printf("세번째 아이의 이름은 %c,%c이고, 나이는 %d살입니다\n", first_initial, last_initial, age);


    return 0;
}
