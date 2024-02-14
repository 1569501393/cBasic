#include <stdio.h>

int main() {
    /* C 语言实例 - 判断字母 */
    printf("Hello, World!\n");

    char c;
    printf("请输入一个字母: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("输入的大写字母是: %c\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("输入的小写字母是: %c\n", c);
    } else {
        printf("输入的不是字母\n");
    }
    return 0;
}