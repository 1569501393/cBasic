#include <stdio.h>

int main(){
    /* two numbers divide */
    int dividend, divisor, quotient, remainder;
    printf("input dividend: ");
    scanf("%d", &dividend);
    printf("input divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("%d / %d = %d ... %d\n", dividend, divisor, quotient, remainder);

    return 0;
}