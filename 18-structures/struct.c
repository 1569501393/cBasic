#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    struct Person person;
    printf("struct Person size = %zu byte ", sizeof(person));




    return 0;
}
