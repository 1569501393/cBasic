#include <stdio.h>

// int max(int num1, int num2);

void swap(int *num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main() {
    int a = 100;
    int b = 200;


    printf("before swap, a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("after swap, a = %d, b = %d\n", a, b);

    return  0;
}




