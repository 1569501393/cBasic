#include <stdio.h>

int main() {
    /* C 语言实例 - 求两数最小公倍数 */
    printf("Hello, World!\n");
    int n1, n2, minMultiple;

    printf("请输入两个整数：\n");
    scanf("%d %d", &n1, &n2);

    minMultiple = (n1 > n2) ? n1 : n2;
    while (1) {
        if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
            printf("最小公倍数 = %d \n", minMultiple);
            break;
        }
        ++minMultiple;
    }

    return 0;
}