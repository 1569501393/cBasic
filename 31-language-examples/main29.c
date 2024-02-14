#include <stdio.h>
#include <math.h>

int main() {
    /* C 语言实例 - 计算一个数的 n 次方 */
    printf("Hello, World!\n");

    int base, exponent, exponent_init, result = 1;
    printf("请输入底数和指数: ");
    scanf("%d %d", &base, &exponent);
    exponent_init = exponent;
    while (exponent > 0) {
        result = result * base;
        --exponent;
    }
    printf("result=%d \n", result);

    // 法2
    result = pow(base, exponent_init);
    printf("result=%d \n", result);




    return 0;
}