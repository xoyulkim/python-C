// ch13lab1.c

#include <stdio.h>
int main()

{
    int cnt=1;
    int num;
    while (cnt<=3){
        printf("%d번째 정수를 입력하세요: ", cnt);
        scanf("%d", &num);
        cnt ++;
        printf("입력된 정수는 %d입니다\n", num);
    }
    return 0;

}
