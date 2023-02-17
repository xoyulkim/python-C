#include<stdio.h>
#include<string.h>
int main()

{
    char pass[20];
    int i, rlower, rupper, rdigit;

    printf("암호를 입력하세요: ");
    gets(pass);

    for(i=0; i<=strlen(pass); i++){
        if (isupper(pass[i])>0){
            rupper=1;
        }
        else if (islower(pass[i])>0){
            rlower=1;
        }
        else if (isdigit(pass[i])>0){
            rdigit=1;
        }
    }
    if(rupper&&rlower&&rdigit==1){
        printf("암호가 안전합니다");
    }
    else {
        printf("암호 다시 만들어");
    }
    return 0;
}
