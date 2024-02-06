#include <stdio.h>

int main() {
    int sum, a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}