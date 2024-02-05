#include <stdio.h>

int main() {
    int sum = 17, count = 5;
    double mean;

    mean = (double) sum / count;
    // Mean1 value is: 3
    printf("Mean1 value is: %d \n", sum / count);
    // Mean2 value is: 3.400000
    printf("Mean2 value is: %f \n", mean);

    int i = 17;
    /* ascii c=99*/
    char c = 'c';
    sum = i +c;

    // sizeof(i) = 4
    printf("sizeof(i) = %lu \n", sizeof(i));
    // sizeof(c) = 1
    printf("sizeof(c) = %lu \n", sizeof(c));
    // Sum of i and c is: 116
    printf("Sum of i and c is: %d \n", sum);

    return 0;
}