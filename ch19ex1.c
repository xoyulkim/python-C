#include <stdio.h>
#include <string.h>
int main()

{
    int i;
    char add[50];

    puts("���� �ּҸ� �Է��ϼ���: ");
    gets(add);

    for(i=strlen(add)-1; i>=0; i--){
        putchar(add[i]);
    }
    return 0;
}
