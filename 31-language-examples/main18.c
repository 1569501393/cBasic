#include <stdio.h>

int main() {
    /* C 语言实例 - 判断闰年 */
    printf("Hello, World!\n");

    int year;
    printf("input a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}