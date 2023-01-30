//ch13preex2.c

#include <stdio.h>
int main()

{
    int cnt=1;
    while (cnt<=100){
        if (cnt%2==0){
            printf("%d ", cnt);
        }
        cnt++;
    }
    return 0;
}
