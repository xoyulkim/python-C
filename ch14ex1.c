#include <stdio.h>
int main()

{
    int num;
    int max, min;
    int i;

    max=0;
    min=100;
    for( i=0; i<5; i++){
        printf("%d번째 정수를 입력하세요(1~100): ", i+1);
        scanf("%d", &num);

        if (num>max) max=num;
        if (num<min) min=num;

    }
    printf("최댓값: %d, 최소값:%d\n", max, min);
    return 0;
}
