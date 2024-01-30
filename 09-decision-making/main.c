#include <stdio.h>

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    (num%2 ==0) ? printf("even \n"): printf("odd  \n");

    return 0;
}