#include <stdio.h>

int main() {
    enum day {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
    } workday;

    int a= 1;
    enum day weekend;
    weekend = (enum day) a;
    printf("%d\n", weekend);

    for (weekend = saturday;  weekend<= friday; ++weekend) {
        printf("%d\n", weekend);
    }

    return 0;
}