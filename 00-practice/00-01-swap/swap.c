#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a, b, tmp;
    a = 1;
    b = 2;
    printf("a = %d, b = %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}