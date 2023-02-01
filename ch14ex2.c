#include <stdio.h>
int main()

{
    int i;
    int dan;

    printf("몇 단을 출력할까요? ");
    scanf("%d", &dan);

    for (i=1; i<=9; i++){
        printf("%d*%d=%d\n", dan, i, dan*i);
    }


    for (i=2; i<=9; i++){
        for (dan=1; dan<=9; dan++){
            printf("%d*%d=%d\n", i, dan, dan*i);
        }
    }
    return 0;
}
