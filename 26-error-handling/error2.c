#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0) {
        fprintf(stderr, "Error: division by zero\n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stdout, "Quotient = %d\n", quotient);
    exit(EXIT_SUCCESS);

    return 0;
}