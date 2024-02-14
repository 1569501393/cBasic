#include <stdio.h>

int main() {
    /* C 语言实例 - 交换两个数的值 */
    printf("Hello, World!\n");
    int num1, num2, temp;
    printf("input two numbers \n");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("交换后的值为：%d 和 %d \n", num1, num2);

    // 不使用临时变量
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("交换后的值为：%d 和 %d \n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("交换后的值为：%d 和 %d \n", num1, num2);


    return 0;
}