#include <stdio.h>
int main()

{
    int i, total=0;
    int arr[5];

    for(i=0; i<5; i++){
        printf("%d��° ������ �Է��ϼ���: ",i+1);
        scanf("%d", &arr[i]);
    //�迭�� ������ ���� ���ϱ�
        total=total+arr[i];
    }

    printf("�հ��: %d\n", total);
    printf("3��°�� �Էµ� ������: %d", arr[2]);

    arr[3]=10;
    printf("\n4��° ����: %d", arr[3]);
    return 0;
}
