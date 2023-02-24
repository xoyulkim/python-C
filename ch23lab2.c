#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct st_info{
    char title[30];
    char author[30];
    int price;
};

int main()
{
    struct st_info st[3];  //구조체 포인터 배열
    int i;

    for(i=0; i<3; i++){
            printf("%d번째 책의 제목은? ", i+1);
            gets(st[i].title);

            puts("책의 작가는? ");
            gets(st[i].author);

            puts("책의 가격은? ");
            scanf("%d", &st[i].price);

            getchar();  //다음 반복을 위해

    }
    printf("\n========================책의 정보 ========================\n");
    for(i=0;i<3;i++){
        printf("#%d %s\t%s\t%d\n", i+1, st[i].title, st[i].author, st[i].price);
    }

    return 0;
}
