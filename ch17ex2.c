#include <stdio.h>
int main()

{
    int i, score, cnt=0;
    int arr[5];

    for(i=0; i<5; i++){
        printf("������ �Է��ϼ���: ");
        scanf("%d", &score);
        arr[i]=score;

        if(arr[i]>=80) cnt++;
    }
    printf("80�� �̻��� �л� ��: %d\n", cnt);

        for(i=0; i<5; i++) {
            arr[i]=arr[i]+5;

        if(arr[i]>100){
            arr[i]=100;
        }
         printf("%d ", arr[i]);
    }
    return 0;
}
