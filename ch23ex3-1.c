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
    struct st_info *st[3];  //����ü ������ �迭
    int i;

    for(i=0; i<3; i++){
        st[i]=(struct st_info*) malloc(sizeof(struct st_info)); //�޸� �Ҵ�
        if(st[i] != NULL){ //�Ҵ� ����
            puts("�л� �̸���? ");
            gets(st[i]->name);

            puts("��� ������? ");
            gets(st[i]->subject);

            puts("�л� ���̴�? ");
            scanf("%d", &st[i]->age);

            getchar();  //���� �ݺ��� ����
        }
    }
    printf("\n��ϵ� �л� ���� ========================\n");
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\n", st[i]->name, st[i]->subject, st[i]->age);
        free(st[i]);
    }

    return 0;
}
