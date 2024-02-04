#include <stdio.h>
#include <stdlib.h>

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; ++i) {
        array[i] = getNextValue();
    }
}

/* get random number */
int getNextRandomValue() {
    return rand();
}

int main() {
    int my_array[10];

    populate_array(my_array, 10,getNextRandomValue);

    for (int i = 0; i < 10; ++i) {
        printf("my_array[%d] = %d\n", i, my_array[i]);
    }

    return 0;
}