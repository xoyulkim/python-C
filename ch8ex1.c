//ch8ex1.c

#include <stdio.h>
int main()

{
    int cnt =0;

    cnt+=1;

    printf("cnt=%d\n", cnt);    //1
    printf("cnt=%d\n", cnt+1);  //2
    printf("cnt=%d\n", cnt+=1); //2

    cnt+=2;
    printf("cnt=%d\n", cnt);   //4
    cnt -=1;                   //3
    printf("cnt=%d\n", cnt-1); //2
    printf("cnt=%d\n", cnt-=2); //1

    return 0;

}
