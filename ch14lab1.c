#include <stdio.h>
int main()

{
    int i;
    int sum=0;

    for (i=1; i<=500; i++){
        if (i%3==0 || i%5==0){
            sum+=i;
        }
    }
    printf("�հ�: %d", sum);
    return 0;
}
