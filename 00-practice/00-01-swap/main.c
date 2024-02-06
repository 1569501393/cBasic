#include <stdio.h>
#include <stdlib.h>

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