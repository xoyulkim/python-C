#include <stdio.h>
#include <stdlib.h>
int main()

{
    char str[50]; //파일에서 읽어들인 문자열을 저장할 배열 선언

    FILE *fptr=fopen("data.txt", "r");  //"rt"=="r"

    if(fptr==NULL){
        printf("file open fail");
        exit(1);
    }

    //읽어온 게 아무것도 없을 때까지 반복해서 읽기
    while(fgets(str, sizeof(str), fptr) !=NULL){
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
