#include <stdio.h>
#include <string.h>

/* normal struct*/
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* bit-field struct*/
struct {
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;

struct {
    unsigned int widthValidated: 4;
    unsigned int heightValidated: 5;
    unsigned int lengthValidated: 7;
} status3;

struct example1 {
    int a : 4;
    int b : 5;
    int c : 7;
};

int main() {
    // Size of status1: 8
    printf("Size of status1: %d\n", sizeof(status1));

    // Size of status2: 4
    printf("Size of status2: %d\n", sizeof(status2));

    // Size of status3: 4
    printf("Size of status3: %d\n", sizeof(status3));

    struct example1 ex1;

    // Size of example1: 4 bytes
    printf("Size of example1: %lu bytes\n", sizeof(ex1));

    return 0;
}