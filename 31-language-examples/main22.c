#include <stdio.h>

int main() {
    /* C 语言实例 - 输出九九乘法口诀表 */
    printf("Hello, World!\n");

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            // printf("%d * %d = %d \t", i, j , i*j);
            printf("%d*%d=%d \t", i, j , i*j);
        }
        printf("\n");
    }

    return 0;
}