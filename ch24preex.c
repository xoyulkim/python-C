#include<stdio.h>
//함수의 원형 선언 (prototype 선언)
void input_score();
void print_avg();
void compute_avg();

int main()
{
    input_score(); //점수 입력받는 함수 호출
    compute_avg(); //평균 계산하는 함수 호출
    printf("종료\n");
    return 0;
}

void input_score()
{
    printf("성적 입력받기\n");
    return;
}

void compute_avg()
{
    printf("평균 계산하기\n");
    print_avg(); //평균 출력하는 함수 호출
    return;
}

void print_avg()
{
    printf("평균 출력하기\n");
    return;
}
