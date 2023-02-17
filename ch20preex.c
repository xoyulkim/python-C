#include <stdio.h>
int main()

{
    int age=20;
    int *age_ptr =&age; //포인터 변수 선언 및 초기화

    printf("age변수의 값: %d, %d\n", age, *age_ptr);
    printf("age변수의 주소: %x, %x\n", &age, age_ptr);
    return 0;
}
