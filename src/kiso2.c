#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 3;

    printf("足し算: %d\n", a + b);
    printf("引き算: %d\n", a - b);
    printf("掛け算, %d\n", a * b);
    printf("割り算(整数), %d\n", a / b);
    printf("割り算(小数), %f\n", (double)a / b);
    
    return 0;
}