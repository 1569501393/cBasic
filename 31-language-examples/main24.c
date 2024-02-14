#include <stdio.h>

int main() {
    /* C 语言实例 - 求两数的最大公约数 */
    printf("Hello, World!\n");

    int n1, n2, i, gcd;
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("%d\n", i);
            gcd =i;
        }
    }

    printf("%d and %d gcd is %d \n", n1, n2, gcd);

    return 0;
}