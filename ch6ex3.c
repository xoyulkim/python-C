// ch6ex3.c

#include <stdio.h>
int main()

{
    char first, second;

    printf("�̸��� �̴ϼ��� �� ���ڸ� �Է���: ");
    scanf("%c", &first);

    printf("���� �̴ϼ��� ù ���ڸ� �Է�: ");
    scanf(" %c", &second); //%c�տ� ���� �α�      %c�� ���͸� ���ڷ� �о���̱� ���� %d,%f�� ��� X

    printf("����� �̸��� %c, %c�Դϴ�", first, second);

    return 0;
}
