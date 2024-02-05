#include <stdio.h>

#define MAX_ARRAY_LENGTH 20

// #define message_for(a, b) \
//     printf(#a " and " #b ": We love you!\n")

#define message_for(a, b) printf(#a " and " #b ": We love you!\n")

#define MAX(x, y) (x > y ? x: y)

int main() {
    printf("MAX_ARRAY_LENGTH = %d \n", MAX_ARRAY_LENGTH);
    printf("__DATE__ = %s \n", __DATE__);
    printf("__TIME__ = %s \n", __TIME__);
    printf("__TIMESTAMP__ = %s \n", __TIMESTAMP__);
    printf("__FILE__ = %s \n", __FILE__);
    printf("__LINE__ = %d \n", __LINE__);
    printf("__STDC__ = %d \n", __STDC__);

    message_for(Carole, Debra);
    printf("Maxbetween 10 and 20 is %d \n", MAX(10, 20));

    return 0;
}