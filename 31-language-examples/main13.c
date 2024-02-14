#include <stdio.h>

int main() {
    /* C 语言实例 - 判断奇数/偶数 */
    printf("Hello, World!\n");

    int num;

    while(1) {
        printf("请输入一个整数：");
        scanf("%d", &num);

        if(num == -1) {
            break;
        }
        if(num % 2 == 0) {
            printf("%d 是一个偶数\n", num);
        } else {
            printf("%d 是一个奇数\n", num);
        }
    }

    return 0;
}