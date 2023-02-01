#include <stdio.h>
int main()

{
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("*");
        }
    printf("\n");
    }


    int i=0;
    while(i<3){
        int j=0;
        while(j<5){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
