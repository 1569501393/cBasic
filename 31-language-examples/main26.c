#include <stdio.h>

int main() {
    /* C 语言实例 - 阶乘 */
    printf("Hello, World!\n");

    int n, factorial = 1;

    printf("请输入一个整数：");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        printf("%d! = %d\n", i, factorial);
    }

    return 0;
}