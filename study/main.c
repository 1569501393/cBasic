#include <stdio.h>


int main() {
    int a, b, sum;
    printf("请输入两个整数\n");

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("%d + %d = %d \n", a, b, sum);

    return 0;
}
