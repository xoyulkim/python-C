//ch9lab4.c

#include <stdio.h>
int main()

{
    int time;
    printf("Áö±Ý ¸î ½Ã¾ß? ");
    scanf("%d", &time);

    if (time<=10)
        printf("±Â¸ð´×");
    else if (time<=20)
        printf("±Âµ¥ÀÌ");
    else
        printf("±ÂÀÌºê´×");

    return 0;
}
