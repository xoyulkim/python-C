#include <stdio.h>
int main()

{
    int i;

    for(i=1; i<=5; i++){
        printf("i=%d\n", i);
    }


    for(i=5; i>=1; i--){
        printf("i=%d\n", i);
    }

    for(i=1; i<10; i+=2){
        printf("i=%d\n", i);
    }

    for(i=10; i>0; i-=2){
        printf("i=%d\n", i);
    }

    return 0;

}
