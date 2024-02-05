#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        // Value of errno: 2
        fprintf(stderr, "Value of errno: %d\n", errnum);

        // Error printed by perror: No such file or directory
        perror("Error printed by perror");

        // Error opening file: No such file or directory
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }


    return 0;
}