#include<stdio.h>
int main()

{
    int i;
    //char m1[50], m2[50], m3[50], m4[50], m5[50];
    char *movies[5];//={m1, m2, m3, m4, m5};

    for (i=0; i<5; i++){
        printf("#%d ��ȭ������ ? ", i+1);
        gets(movies[i]); //������ �� ���ڿ��� �Է¹ޱ� ����
    }

    for (i=0; i<5; i++){
        puts(movies[i]);
    }
    return 0;

}
