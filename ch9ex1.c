//ch9ex1

#include <stdio.h>
#define CURRENT_YEAR 2023

int main()

{
    int year, age;
    printf("�� �⵵�� �¾�̳���? ");
    scanf("%d", &year);

    if (year>CURRENT_YEAR)
        printf("�߸��� �Է�");

    else{
        age=CURRENT_YEAR-year;
        printf("�ʴ� %d���̾�", age);
    }

    return 0;
}
