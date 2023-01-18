//ch9lab3.c

#include <stdio.h>
int main()

{
    float score;
    printf("≥  ∏Ó ¡°¿Ãæﬂ? ");
    scanf("%f", &score);

    if (score>=90) {
        printf("¿ﬂ«ﬂ≥◊");
    }
    else if (score>=80) {
        printf("±¬±¬");
    }
    else if (score>=70) {
        printf("≥¥πËµÂ");
    }
    else if (score>=70) {
        printf("±€ΩÍ");
    }
    else {
        printf("≥  ∏€√ª¿Ã");
    }

    return 0;
}
