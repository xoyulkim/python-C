// ch13lab1.c

#include <stdio.h>
int main()

{
    int cnt=1;
    int num;
    while (cnt<=3){
        printf("%d��° ������ �Է��ϼ���: ", cnt);
        scanf("%d", &num);
        cnt ++;
        printf("�Էµ� ������ %d�Դϴ�\n", num);
    }
    return 0;

}
