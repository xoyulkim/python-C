//ch10lab2.c

# include<stdio.h>
int main()

    {
        int a,b;
        printf("µÎ °³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇØ: ");
        scanf("%d%d", &a,&b);

        if (a%2==0 && b%2==0){
            printf("Â¦¼ö");
        }
        else if (a%2!=0 && b%2!=0)
            printf("È¦¼ö");
        }
        else {
            printf("È¦Â¦");
        }
        return 0;
    }
