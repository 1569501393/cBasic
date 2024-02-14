#include <stdio.h>

int main() {
    /* C 语言实例 - 计算自然数的和 */
    printf("Hello, World!\n");

    int n, i, sum = 0;
    printf("请输入自然数的上限：");
    scanf("%d", &n);
    for (i = 0; i <= n; ++i) {
        sum += i;
    }
    printf("自然数 %d 以内的和为：%d\n", n, sum);

    return 0;
}