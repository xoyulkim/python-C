#include <stdio.h>

#define MAX_SIZE 5 //배열의 크기

void print_avg();
void input_score();
void compute_avg();

//전역변수 선언
int scores[MAX_SIZE];
float avg;

int main()
{
    input_score();
    compute_avg();
    print_avg();
    return 0;
}

void input_score(){
    int i;
    for(i=0; i<MAX_SIZE; i++){
        printf("%d번째 학생의 점수는? ", i+1);
        scanf("%d", &scores[i]);
    }
}
void compute_avg()
{
    int i, sum=0;
    for(i=0; i<MAX_SIZE; i++){
        sum+=scores[i];
    }
    avg=(float)sum/MAX_SIZE;
}

void print_avg()
{
    printf("평균은 %.1f점입니다\n", avg);
}
