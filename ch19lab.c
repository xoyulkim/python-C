#include<stdio.h>
#include<string.h>
int main()

{
    char pass[20];
    int i, rlower, rupper, rdigit;

    printf("��ȣ�� �Է��ϼ���: ");
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
        printf("��ȣ�� �����մϴ�");
    }
    else {
        printf("��ȣ �ٽ� �����");
    }
    return 0;
}
