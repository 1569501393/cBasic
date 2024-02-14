#include <stdio.h>

int main() {
    /* C 语言实例 - 循环输出26个字母 */
    printf("Hello, World!\n");

    char letter = 'A';
    for (letter; letter <= 'Z'; ++letter) {
        printf("%c ", letter);
    }
    printf("\n");

    // 法2
    letter = 'A';
    for (int i = 0; i < 26; ++i) {
        printf("%c ", letter);
        letter++;
    }
    printf("\n");

    return 0;
}