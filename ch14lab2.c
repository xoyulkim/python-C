#include <stdio.h>
int main()

{
    int a,b;
    int i;

    printf("���� �� ���� �Է��ϼ���(1~100): ");
    scanf("%d%d", &a,&b);

    for(i=a; i<=b; i++){
        if(i%2==1){
            printf("%d,", i);
        }
    }
    printf("\b ");
    return 0;
}
