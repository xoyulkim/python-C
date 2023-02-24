#include<stdio.h>
//구조체 정의
struct point_info{
    int x;
    int y;
};

//학생 정보를 저장하기 위한 구조체 정의
struct student_info{
    int ban;
    int num;
    char name[50];
    int score;
};

struct student_type{
    int n;
    char name2[31];
    char subject[31];
};
int main()

{
    struct point_info point; //구조체 포인터 변수 선언
    struct student_info student;
    struct student_type academy;
}
