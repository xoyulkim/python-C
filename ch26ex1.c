#include<stdio.h>

#define MAX_SIZE 5 //배열의 크기

//함수의 원형 선언
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);

int main()

{
    int scores[MAX_SIZE]; //성적을 저장하기 위한 배역
    float avg;

    input_score(scores); //scores 배열에 성적을 저장하기 위해 배열의 주소 전달
    avg=compute_avg(scores); //scores 배열의 성적 평균을 전환 받아 avg에 저장
    print_avg(avg);

    return 0;
}

void input_score(int scores[])
{
    for(int i=0; i<MAX_SIZE; i++){
        printf("%d번째 학생의 점수는? ", i+1);
        scanf("%d", &scores[i]);
    }
}

float compute_avg(int scores[])
{
    int i, sum=0;
    float avg;

    for(i=0; i<MAX_SIZE; i++){
        sum=sum+scores[i];
    }
    avg=(float)sum/MAX_SIZE;
    return avg;
}

void print_avg(float avg)
{
    printf("평균은 %.1f점입니다", avg);
}
