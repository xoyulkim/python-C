#include <stdio.h>
int main()

{
    int choice;

    printf("====================\n");
    printf("������ �Ͻðڽ��ϱ�? \n");
    printf("1. ���ο� ����ó �߰�\n");
    printf("2. ����ó ����\n");
    printf("3. ����ó ��ȭ\n");
    printf("4. ���� �޽���\n");
    printf("5. ����\n");
    printf("====================\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("����ó �߰��� ����\n");
        break;
    case 2:
        printf("����ó ������ ����\n");
        break;
    case 3:
        printf("����ó ��ȭ�� ����\n");
        break;
    case 4:
        printf("���� �޽��� ����\n");
        break;
    case 5:
       exit(0);  //���α׷� ����
    default:
        printf("�߸��� �����Դϴ�");
        break;
    }
    return 0;
}
