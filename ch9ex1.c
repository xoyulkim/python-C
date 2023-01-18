//ch9ex1

#include <stdio.h>
#define CURRENT_YEAR 2023

int main()

{
    int year, age;
    printf("몇 년도에 태어나셨나요? ");
    scanf("%d", &year);

    if (year>CURRENT_YEAR)
        printf("잘못된 입력");

    else{
        age=CURRENT_YEAR-year;
        printf("너는 %d살이야", age);
    }

    return 0;
}
