#include <stdio.h>

#define MAX_ARRAY_LENGTH 20

int main() {
    printf("MAX_ARRAY_LENGTH = %d \n", MAX_ARRAY_LENGTH);
    printf("__DATE__ = %s \n", __DATE__);
    printf("__TIME__ = %s \n", __TIME__);
    printf("__TIMESTAMP__ = %s \n", __TIMESTAMP__);
    printf("__FILE__ = %s \n", __FILE__);
    printf("__LINE__ = %d \n", __LINE__);
    printf("__STDC__ = %d \n", __STDC__);

	return 0;
}