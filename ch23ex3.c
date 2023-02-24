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
    puts("학생 이름은? ");
    gets(st[i].name);
    puts("학생 등록 과목은? ");
    gets(st[i].subject);
    puts("학생 나이는? ");
    scanf("%d", &st[i].age);

    getchar();   //다음 반복을 위해 입력버퍼의 enter키 삭제
  }
  printf("\n등록된 학생 정보 =========================\n");
  for (i=0;i<3;i++){
    printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
  }
  return 0;
}
