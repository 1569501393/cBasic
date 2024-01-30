#include <stdio.h>

// 定义常量
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
#define PI 3.14
#define TRUE 1
#define FALSE 0

int main() {
    printf("Hello\t World\n\n");

    // 字符常量 ASCII 值强制转为整数值
    char myChar = 'a';
    int myAsciiValue = (int) myChar;
    // ASCII value of a is: 97
    printf("ASCII value of %c is: %d\n", myChar, myAsciiValue);

    int area;
    area = LENGTH * WIDTH;
    printf("Area: %d \n", area);

    // 定义常量
    // 在 C 中，有两种简单的定义常量的方式：
    //
    // 使用 #define 预处理器： #define 可以在程序中定义一个常量，它在编译时会被替换为其对应的值。
    // 使用 const 关键字：const 关键字用于声明一个只读变量，即该变量的值不能在程序运行时修改。
    const int MAX_VALUE = 100;
    printf("Max value: %d \n", MAX_VALUE);

    return 0;
}