#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i, n;
    int *ptr;

    printf("�� ���� ������ �����ұ��? ");
    scanf("%d", &n);

    ptr=(int*)malloc(n*sizeof(int));

    if (ptr==NULL){ //�޸� �Ҵ� ����
        printf("�޸� �Ҵ� ����");
        exit(1);
    }
    else { //�޸� �Ҵ� ����
        for(i=0;i<n;i++){ //����ڰ� ���ϴ� ������ŭ �ݺ�
            ptr[i]=i*10; //0,10,20 ... �����ϱ�
        }
        for (i=0;i<n;i++){
            printf("%d ", ptr[i]);
        }
        free(ptr); //�޸� ����
    }
    return 0;
}
