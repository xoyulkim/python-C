#include <stdio.h>
#include <stdlib.h>
int main()

{
    char str[50]; //���Ͽ��� �о���� ���ڿ��� ������ �迭 ����

    FILE *fptr=fopen("data.txt", "r");  //"rt"=="r"

    if(fptr==NULL){
        printf("file open fail");
        exit(1);
    }

    //�о�� �� �ƹ��͵� ���� ������ �ݺ��ؼ� �б�
    while(fgets(str, sizeof(str), fptr) !=NULL){
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
