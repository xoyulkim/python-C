//ch8lab1.c

#include <stdio.h>
int main()

{
    int f_sale;
    printf("ù ���� ������� �Է��ϼ���(�� ������): ");
    scanf("%d", &f_sale);

    f_sale=(long)(f_sale*1.1);
    printf("1�� ���� ������� %d�� �� �Դϴ�.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("2�� ���� ������� %d�� �� �Դϴ�.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("3�� ���� ������� %d�� �� �Դϴ�.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("4�� ���� ������� %d�� �� �Դϴ�.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("5�� ���� ������� %d�� �� �Դϴ�.", f_sale);

    //prinf("%d�� ���� ������� %d�� ���Դϴ�.", year+=1, sale*=1.1);

    return 0;

}
