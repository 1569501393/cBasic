#include <stdio.h>

int main() {
    int a = 21;
    int b = 10;

    int c;

    c = a + b;
    printf("c的值是：%d\n", c);

    c = a - b;
    printf("c的值是：%d\n", c);

    c = a * b;
    printf("c的值是：%d\n", c);

    c = a / b;
    printf("c的值是：%d\n", c);

    // c的值是：21
    c = a++;
    printf("c的值是：%d\n", c);

    // c的值是：23
    c = ++a;
    printf("c的值是：%d\n", c);

    c = a--;
    printf("c的值是：%d\n", c);


    return 0;
}