#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_realloc() {
    char name[100];
    char *description;

    strcpy(name, "jieqiang");

    description = malloc(50*sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error: malloc failed");
    } else {
        strcpy(description, "A programmer who uses C language");
    }

    /* add memory */
    description = realloc(description, 100*sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error: realloc failed");
    }else {
        strcat(description, " to write program");
    }

    printf("Name: %s\n", name);
    printf("Description: %s\n", description);

    /* free memory */
    free(description);
}

int main() {
    my_realloc();

    char name[100];
    char *description;

    strcpy(name, "Jieqiang");

    /* 动态分配内存 */
    // description = (char *) malloc(200 * sizeof(char));
    description = (char *) calloc(200, sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "内存分配失败\n");
    } else {
        strcpy(description, "a good man");
    }

    printf("Name: %s\n", name);
    printf("Description: %s\n", description);

    return 0;
}