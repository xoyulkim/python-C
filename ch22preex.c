#include<stdio.h>
int main()

{
    int i;
    char *subject[]= {"English", "Math", "History", "Science"};   //배열에 초기값 있으면 크기 정해줄 필요 없음

    for(i=0; i<4; i++){
        printf("Subject: %s\n", subject[i]);
    }
    return 0;
}
