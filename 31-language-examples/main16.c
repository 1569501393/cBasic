#include <stdio.h>

int main() {
    /* C 语言实例 - 判断三个数中的最大数 */
    printf("Hello, World!\n");
    double num1, num2, num3;

    printf("请输入三个数，用空格隔开：");
    scanf("%lf %lf %lf", &num1, &num2, &num3);


    double max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    printf("max number = %.2f \n", max);

    return 0;
}