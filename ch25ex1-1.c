#include<stdio.h>
void print_gugudan(int dan);
int main()

{
    int dan;

    printf("몇 단을 출력할래? ");
    scanf("%d", &dan);

    print_gugudan(dan); //입력받은 단을 전달하면서 print_gugudan함수 호출
    return 0;
}

void print_gugudan(int dan)
{
    for(int i=1; i<9; i++){
        printf("%d*%d=%d\n", dan, i, dan*i);
    }
}
