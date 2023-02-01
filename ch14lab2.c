#include <stdio.h>
int main()

{
    int a,b;
    int i;

    printf("정수 두 개를 입력하세요(1~100): ");
    scanf("%d%d", &a,&b);

    for(i=a; i<=b; i++){
        if(i%2==1){
            printf("%d,", i);
        }
    }
    printf("\b ");
    return 0;
}
