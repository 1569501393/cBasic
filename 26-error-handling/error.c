#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main() {
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if (divisor == 0) {
        fprintf(stderr, "Error: division by zero\n");
        exit(-1);
    } else {

    }

    quotient = dividend / divisor;
    printf("Quotient = %d\n", quotient);


    return 0;
}