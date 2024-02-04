#include <stdio.h>

int max(int num1, int num2);

int main() {
    int a = 100;
    int b = 200;
    int ret;

    ret = max(a, b);

    printf("max value is: %d\n", ret);

    return  0;
}

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}


