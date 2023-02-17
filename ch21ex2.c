#include <stdio.h>
#include <ctype.h>
int main()

#define Max_size 5
{
    int i;
    char ans; //사용자의 대답을 저장하는 변수
    char *movies[Max_size]={"Slam Dunk", "Incredible", "Titanic", "Avatar", "Mission Impossible"};
    int movie_rating[Max_size];

    printf("영화들의 평점을 매겨주세요 =================\n");
    for(i=0; i<Max_size; i++){
        printf("\n영화 %s를 보셨나요? (y/n): ", movies[i]);
        scanf(" %c", &ans);
        if( toupper(ans)=='Y'){
            printf("\n평점을 매겨주세요(0~10점 사이)");
            scanf("%d", &movie_rating[i]);
            continue;
        }
        else{
            movie_rating[i]=-1;
        }
    }
    //평점 높은 순으로 나열
    printf("\n=============여러분의 평점==============\n");
    for (i=0; i<Max_size; i++){
        if (movie_rating[i]>=0){
        printf("영화 %s는 평점이 %d점입니다\n", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
