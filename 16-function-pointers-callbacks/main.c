#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    /*p is  function pointer*/
    int (*p)(int, int) = &max;
    int a, b, c, d;

    printf("input 3 numbers:");
    scanf("%d%d%d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("the max is:%d\n", d);

    return 0;
}