#include <stdio.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    //����ü ���� ���� �� �ʱ�ȭ
    struct st_info st={"�迹��","����",22};

    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st.age,st.name,st.subject);

    //�������� ����
    strcpy(st.subject, "����");
    st.age=23;
    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st.age,st.name,st.subject);

    //����ü ������ ���� ����
    struct st_info *st_ptr;
    st_ptr=&st;

    st_ptr ->age=22;
    strcpy(st_ptr->name, "���");
    strcpy(st_ptr->subject, "���̽�");
    printf("%d���̽� %s���� ���������� %s�Դϴ�\n", st_ptr->age,st_ptr->name,st_ptr->subject);
    return 0;
}
