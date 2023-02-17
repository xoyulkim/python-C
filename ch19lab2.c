#include<stdio.h>
int main()

{
    int i,j,n=2;
    int arr[3][4];

    for (i=0; i<3; i++){
        for(j=0; j<4; j++){
            arr[i][j]=n;
            n+=2;
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
