#include <stdio.h>
#include <string.h>
int main()

{
    char season1[]="Spring";
    char season2[20];
    char season3[20];

    season2[0]='F';
    season2[1]='a';
    season2[2]='l';
    season2[3]='l';
    season2[4]='\0';

    strcpy(season3, "Summer");

    printf("%s\n", season1);
    printf("%s\n", season2);
    printf("%s", season3);

    return 0;

}
