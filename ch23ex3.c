#include <stdio.h>
#include <string.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
  struct st_info st[3];
  int i;

  for(i=0; i<3; i++)  {
    puts("�л� �̸���? ");
    gets(st[i].name);
    puts("�л� ��� ������? ");
    gets(st[i].subject);
    puts("�л� ���̴�? ");
    scanf("%d", &st[i].age);

    getchar();   //���� �ݺ��� ���� �Է¹����� enterŰ ����
  }
  printf("\n��ϵ� �л� ���� =========================\n");
  for (i=0;i<3;i++){
    printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
  }
  return 0;
}
