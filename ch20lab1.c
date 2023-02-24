#include <stdio.h>
int main()

{
    int a=30;
    int *pX, *pY;
    pX=&a;
    pY=&a;
    *pY=*pY+5;
    printf("%d, %d, %d", *pX, *pY, a);    //pY가 a를 가르키고 있는데 pY 값을 바꿔버렸으니 pX, a의 값 모두 바뀜ㄹ

    return 0;

}
