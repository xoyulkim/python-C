#include <stdio.h>
int main()

{
    int i, max, max_index;
    int score[5]={10,5,8,20,16};
    int ass[5]={7,2,10,15,9};
    max=0; //�ִ밪 �ʱ�ȭ
    max_index=0;

    for(i=0; i<5; i++){
        if(score[i]>max){
            max=score[i];
            max_index=i;
        }
    }
    printf("�ִٵ��� ���: %d��°, ����: %d��, ��ý�Ʈ: %dȸ", max_index+1, max, ass[max_index]);

    return 0;
}
