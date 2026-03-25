#include <stdio.h>

int main(void) {
    int age;
    double height;
    char grade;

    printf("年齢を入力: ");
    scanf("%d", &age);

    printf("身長を入力: ");
    scanf("%lf", &height);
    getchar();

    printf("評価を入力:" );
    scanf("%c", &grade);

    printf("年齢: %d歳\n", age);
    printf("身長: %.1fcm\n", height);
    printf("評価: %c\n", grade);

    return 0;
}