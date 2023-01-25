#include <stdio.h>
int main()

{
    int choice;

    printf("====================\n");
    printf("무엇을 하시겠습니까? \n");
    printf("1. 새로운 연락처 추가\n");
    printf("2. 연락처 편집\n");
    printf("3. 연락처 전화\n");
    printf("4. 문자 메시지\n");
    printf("5. 종료\n");
    printf("====================\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("연락처 추가를 선택\n");
        break;
    case 2:
        printf("연락처 편집를 선택\n");
        break;
    case 3:
        printf("연락처 전화를 선택\n");
        break;
    case 4:
        printf("문자 메시지 선택\n");
        break;
    case 5:
       exit(0);  //프로그램 종료
    default:
        printf("잘못된 선택입니다");
        break;
    }
    return 0;
}
