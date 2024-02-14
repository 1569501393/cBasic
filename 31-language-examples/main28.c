#include <stdio.h>

int main() {
    /* C 语言实例 - 判断数字为几位数 */
    printf("Hello, World!\n");

    int number_init, number, count = 0;
    printf("请输入一个数字：");
    scanf("%d", &number);
    number_init = number;

    while (number > 0 ) {
        number = number / 10;
        ++count;
    }
    printf("%d这个数字是%d位数。\n", number_init, count);

    return 0;
}