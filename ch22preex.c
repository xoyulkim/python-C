#include<stdio.h>
int main()

{
    int i;
    char *subject[]= {"English", "Math", "History", "Science"};   //�迭�� �ʱⰪ ������ ũ�� ������ �ʿ� ����

    for(i=0; i<4; i++){
        printf("Subject: %s\n", subject[i]);
    }
    return 0;
}
