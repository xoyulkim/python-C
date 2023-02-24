#include<stdio.h>
#include<stdlib.h>

//학생 정보를 저장하기 위한 구조체 정의
typedef struct student_info{
    char name[30];
    int kor;
    int eng;
    int math;
}student_type;

int main()

{
    student_type student; //파일에서 읽어온 학생 정보를 저장하기 위한 변수 선언
    int cnt=0, total=0;
    float avg;

    FILE *in_ptr=fopen("input.txt", "r"); //읽을 파일 열기
    FILE *out_ptr=fopen("output.txt", "w"); //쓸 파일 열기

    if(in_ptr==NULL||out_ptr==NULL){
        printf("file open fail");
        exit(1);
    }

    while(1){
        //fscanf함수는 읽어온 데이터가 없을 경우 -1이 반환됨
        if(fscanf(in_ptr, "%s %d %d %d", student.name, &student.kor, &student.eng, &student.math)==-1) break;
        cnt++; //학생수 증가
        total=student.kor+student.eng+student.math;
        avg=(float)total/3;

        //학생 이름과 총점, 평균을 파일에 기록
        fprintf(out_ptr, "%s %d %.2f\n", student.name, total, avg);
    }

    fclose(in_ptr);
    fclose(out_ptr);
}
