#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i, num, total=0;
    float avg=1;
    int *ptr;

    printf("�л� ���� �Է��ϼ���: ");
    scanf("%d", &num);

    ptr=(int*)malloc(num*sizeof(int));

    if (ptr==NULL){ //�޸� �Ҵ� ����
        printf("�޸� �Ҵ� ����");
        exit(1);
    }
    else { //�޸� �Ҵ� ����
        for (i=0;i<num;i++){
            printf("%d��° �л��� ������ �Է��ϼ���: \n", i+1);
            scanf("%d", &ptr[i]);
            total=total+ptr[i];
        }
        avg=(float)total/num;
        printf("�л����� ������ %d���̰� ����� %.1f���Դϴ�", total, avg);
        free(ptr); //�޸� ����
    }
    return 0;
}
