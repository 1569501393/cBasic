#include <stdio.h>

int main() {
    /* C 语言实例 - 判断正数/负数 */
    printf("Hello, World!\n");

    double number;
    printf("请输入一个数字: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("这是一个正数。\n");
    } else if (number < 0) {
        printf("这是一个负数。\n");
    } else {
        printf("这个数是零。\n");
    }

    return 0;
}