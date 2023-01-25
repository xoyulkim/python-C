#include <stdio.h>
int main()

{
    int year;

    scanf("%d", &year);
    if ( (year%4==0 && year %100 !=0)||(year%400==0)) {
        printf ("À±³â");
    }
    else {
        printf ("À±³â ¾Æ´Ï¾ß");
    }
    return 0;

}
