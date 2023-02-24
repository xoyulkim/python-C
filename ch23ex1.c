#include <stdio.h>

struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    //구조체 변수 선언 및 초기화
    struct st_info st={"김예현","영어",22};

    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st.age,st.name,st.subject);

    //수강과목 변경
    strcpy(st.subject, "수학");
    st.age=23;
    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st.age,st.name,st.subject);

    //구조체 포인터 변수 선언
    struct st_info *st_ptr;
    st_ptr=&st;

    st_ptr ->age=22;
    strcpy(st_ptr->name, "김고물");
    strcpy(st_ptr->subject, "파이썬");
    printf("%d살이신 %s님의 수강과목은 %s입니다\n", st_ptr->age,st_ptr->name,st_ptr->subject);
    return 0;
}
