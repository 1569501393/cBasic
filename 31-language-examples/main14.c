#include <stdio.h>

int main() {
    /* C 语言实例 - 循环区间范围内的奇数/偶数 */
    printf("Hello, World!\n");

    int i, loopCnt = 10;
    for (i = 0; i < loopCnt; ++i) {
        if (i % 2 == 0) {
            printf("偶数: %d\n", i);
        } else {
            printf("奇数: %d\n", i);
        }

    }

    return 0;
}