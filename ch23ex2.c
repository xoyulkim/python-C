#include <stdio.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct st_info st[3]={
                           {"���", "����", 22},
                           {"�̰�", "����", 5},
                           {"���", "����ο��Ȱ", 7},
                         };
    for(int i=0;i<3;i++){
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }
    return 0;
}
