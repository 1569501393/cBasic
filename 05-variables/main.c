#include <stdio.h>

// 函数外定义变量 x 和 y
int x;
int y;

int addTwoNum() {
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;

    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;

    return x + y;
}

int main() {
    int result;
    result = addTwoNum();

    printf("result = %d \n", result);

    return 0;
}