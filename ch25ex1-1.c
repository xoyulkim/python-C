#include<stdio.h>
void print_gugudan(int dan);
int main()

{
    int dan;

    printf("�� ���� ����ҷ�? ");
    scanf("%d", &dan);

    print_gugudan(dan); //�Է¹��� ���� �����ϸ鼭 print_gugudan�Լ� ȣ��
    return 0;
}

void print_gugudan(int dan)
{
    for(int i=1; i<9; i++){
        printf("%d*%d=%d\n", dan, i, dan*i);
    }
}
