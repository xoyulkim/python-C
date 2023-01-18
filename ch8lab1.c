//ch8lab1.c

#include <stdio.h>
int main()

{
    int f_sale;
    printf("첫 해의 매출액을 입력하세요(만 원단위): ");
    scanf("%d", &f_sale);

    f_sale=(long)(f_sale*1.1);
    printf("1년 뒤의 매출액은 %d만 원 입니다.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("2년 뒤의 매출액은 %d만 원 입니다.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("3년 뒤의 매출액은 %d만 원 입니다.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("4년 뒤의 매출액은 %d만 원 입니다.\n", f_sale);
    f_sale=(long)(f_sale*1.1);
    printf("5년 뒤의 매출액은 %d만 원 입니다.", f_sale);

    //prinf("%d년 뒤의 매출액은 %d만 원입니다.", year+=1, sale*=1.1);

    return 0;

}
