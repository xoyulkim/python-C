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
    struct st_info st[3];  //����ü ������ �迭
    int i;

    for(i=0; i<3; i++){
            printf("%d��° å�� ������? ", i+1);
            gets(st[i].title);

            puts("å�� �۰���? ");
            gets(st[i].author);

            puts("å�� ������? ");
            scanf("%d", &st[i].price);

            getchar();  //���� �ݺ��� ����

    }
    printf("\n========================å�� ���� ========================\n");
    for(i=0;i<3;i++){
        printf("#%d %s\t%s\t%d\n", i+1, st[i].title, st[i].author, st[i].price);
    }

    return 0;
}
