#include<stdio.h>

#define MAX_SIZE 5 //�迭�� ũ��

//�Լ��� ���� ����
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);

int main()

{
    int scores[MAX_SIZE]; //������ �����ϱ� ���� �迪
    float avg;

    input_score(scores); //scores �迭�� ������ �����ϱ� ���� �迭�� �ּ� ����
    avg=compute_avg(scores); //scores �迭�� ���� ����� ��ȯ �޾� avg�� ����
    print_avg(avg);

    return 0;
}

void input_score(int scores[])
{
    for(int i=0; i<MAX_SIZE; i++){
        printf("%d��° �л��� ������? ", i+1);
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
    printf("����� %.1f���Դϴ�", avg);
}
