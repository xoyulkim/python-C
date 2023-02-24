#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct st_info *st[3];  //구조체 포인터 배열
    int i;

    for(i=0; i<3; i++){
        st[i]=(struct st_info*) malloc(sizeof(struct st_info)); //메모리 할당
        if(st[i] != NULL){ //할당 성공
            puts("학생 이름은? ");
            gets(st[i]->name);

            puts("등록 과목은? ");
            gets(st[i]->subject);

            puts("학생 나이는? ");
            scanf("%d", &st[i]->age);

            getchar();  //다음 반복을 위해
        }
    }
    printf("\n등록된 학생 정보 ========================\n");
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\n", st[i]->name, st[i]->subject, st[i]->age);
        free(st[i]);
    }

    return 0;
}
