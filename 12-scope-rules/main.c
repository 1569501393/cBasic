#include <stdio.h>

// 全局变量
int g;

int main() {
    // 局部变量
    int a, b, c;
    a = 10;
    b = 20;
    g = c = a + b;

    printf("value of a = %d, b = %d, c = %d, g = %d \n", a, b, c, g);

    return 0;
}