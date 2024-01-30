#include <stdio.h>
#include <float.h>
// #include <limits.h>

int main() {
    // int 存储大小为: 4 字节
    printf("int 存储大小为: %lu 字节\n", sizeof(int));
    // float 存储大小为: 4 字节
    printf("float 存储大小为: %lu 字节\n", sizeof(float));
    // float 最小值: 1.175494E-38
    printf("float 最小值: %E \n", FLT_MIN);
    // float 最大值: 3.402823E+38
    printf("float 最大值: %E \n", FLT_MAX);
    // float 精度值: 6
    printf("float 精度值: %d \n", FLT_DIG);

    // 类型转换
    int i = 10;
    float f = 3.14;
    double d = i + f;
    printf("d = %lf \n", d);

    return 0;
}