//ch10lab2.c

# include<stdio.h>
int main()

    {
        int a,b;
        printf("�� ���� ������ �Է���: ");
        scanf("%d%d", &a,&b);

        if (a%2==0 && b%2==0){
            printf("¦��");
        }
        else if (a%2!=0 && b%2!=0)
            printf("Ȧ��");
        }
        else {
            printf("Ȧ¦");
        }
        return 0;
    }
