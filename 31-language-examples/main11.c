#include <stdio.h>

int main() {
    /* C 语言实例 - 计算 int, float, double 和 char 字节大小 */
    int integerType;
    float floatType;
    double doubleType;
    char characterType;
    short shortType;
    long longType;

    // Size of int: 4 byte(s)
    printf("Size of int: %zu byte(s)\n", sizeof(integerType));
    // Size of float: 4 byte(s)
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    // Size of double: 8 byte(s)
    printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
    // Size of char: 1 byte(s)
    printf("Size of char: %zu byte(s)\n", sizeof(characterType));
    // Size of short: 2 byte(s)
    printf("Size of short: %zu byte(s)\n", sizeof(shortType));
    // Size of long: 8 byte(s)
    printf("Size of long: %zu byte(s)\n", sizeof(longType));

    return 0;
}