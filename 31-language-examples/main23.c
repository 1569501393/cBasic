#include <stdio.h>

int main() {
    /* C 语言实例 - 斐波那契数列 */
    // 1 1 2 3 5
    printf("Hello, World!\n");
    printf("斐波那契数列：\n");
    int nextNum, n, n1 = 1, n2 = 1;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("%d \n", n1);
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }

    return 0;
}