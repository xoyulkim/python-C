#include<stdio.h>
int main()

{
    int ch;

    //���Ͽ� ����
    FILE *fptr=fopen("test.txt", "w");
    fputs("0123456789abcdefg", fptr);
    fclose(fptr);

    //���Ϸκ��� �б�
    fptr=fopen("test.txt", "r");

    //SEEK_SET
    fseek(fptr, 3, SEEK_SET);
    ch=fgetc(fptr); //���� �ϳ� �о��
    putchar(ch);

    //SEEK_CUR
    fseek(fptr, 3, SEEK_CUR);
    ch=fgetc(fptr); //���� �ϳ� �о��
    putchar(ch);

    //SEEK_END
    fseek(fptr, -3, SEEK_END);
    ch=fgetc(fptr); //���� �ϳ� �о��
    putchar(ch);

    fclose(fptr);

    return 0;
}
