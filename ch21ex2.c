#include <stdio.h>
#include <ctype.h>
int main()

#define Max_size 5
{
    int i;
    char ans; //������� ����� �����ϴ� ����
    char *movies[Max_size]={"Slam Dunk", "Incredible", "Titanic", "Avatar", "Mission Impossible"};
    int movie_rating[Max_size];

    printf("��ȭ���� ������ �Ű��ּ��� =================\n");
    for(i=0; i<Max_size; i++){
        printf("\n��ȭ %s�� ���̳���? (y/n): ", movies[i]);
        scanf(" %c", &ans);
        if( toupper(ans)=='Y'){
            printf("\n������ �Ű��ּ���(0~10�� ����)");
            scanf("%d", &movie_rating[i]);
            continue;
        }
        else{
            movie_rating[i]=-1;
        }
    }
    //���� ���� ������ ����
    printf("\n=============�������� ����==============\n");
    for (i=0; i<Max_size; i++){
        if (movie_rating[i]>=0){
        printf("��ȭ %s�� ������ %d���Դϴ�\n", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
