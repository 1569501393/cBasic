#include <stdio.h>

int main() {
    float num1, num2, product;
    printf("input two numbers: ");
    scanf("%f %f", &num1, &num2);

    product = num1 * num2;
    printf("The product of %f and %f is %f\n", num1, num2, product);

    return 0;
}