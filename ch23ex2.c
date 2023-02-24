#include <stdio.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct st_info st[3]={
                           {"김고물", "수학", 22},
                           {"이고물", "영어", 5},
                           {"고고물", "슬기로운생활", 7},
                         };
    for(int i=0;i<3;i++){
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }
    return 0;
}
