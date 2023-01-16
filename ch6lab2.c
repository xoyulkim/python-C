//ch6lab2.c

#include <stdio.h>
int main()

{
    float tem, yes_tem;
    printf("오늘 날씨는 몇 도예요? ");
    scanf("%f", &tem);
    printf("어제 날씨는 몇 도였나요? ");
    scanf("%f", &yes_tem);

    printf("어제는 %.1f도였고, 오늘은 %.1f도이군요~", tem, yes_tem);

    return 0;
}
