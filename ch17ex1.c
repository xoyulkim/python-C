#include <stdio.h>
int main()

{
    int i, total=0;
    int arr[5];

    for(i=0; i<5; i++){
        printf("%d번째 정수를 입력하세요: ",i+1);
        scanf("%d", &arr[i]);
    //배열의 정수들 총합 구하기
        total=total+arr[i];
    }

    printf("합계는: %d\n", total);
    printf("3번째에 입력된 정수는: %d", arr[2]);

    arr[3]=10;
    printf("\n4번째 정수: %d", arr[3]);
    return 0;
}
