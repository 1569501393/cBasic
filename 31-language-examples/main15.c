#include <stdio.h>

int main() {
    /* C 语言实例 - 判断元音/辅音 */
    printf("Hello, World!\n");

    short isVowel = 0;
    char c;
    printf("请输入一个字符: ");
    scanf("%c", &c);

    char vowels[] = "aeiouAEIOU";
    int len = sizeof(vowels)/sizeof(vowels[0]);
    for (int i = 0; i < len; ++i) {
        if(c == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    if(isVowel) {
        printf("%c 是元音字母。\n", c);
    } else {
        printf("%c 不是元音字母。\n", c);
    }

    return 0;
}