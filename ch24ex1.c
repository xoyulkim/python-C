#include <stdio.h>

//전역변수 선언, 0으로 자동 초기화 됨
int global_v1;

void global_local_fn();

int main()
{
    //지역변수 선언, 초기화 필요
    int local_v1=10;
    global_v1=100;

    printf("global_v1: %d, local_v1: %d\n", global_v1, local_v1);

    global_local_fn(); //함수 호출

    return 0;
}
//전역변수 선언
int global_v2;

void global_local_fn() //함수 정의
{
    int local_v2=20;
    global_v1=300;
    global_v2=200;
    printf("global_v1: %d, global_v2: %d, local_v2: %d\n", global_v1, global_v2, local_v2);
}
