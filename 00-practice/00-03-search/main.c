#include <stdio.h>
#include <stdlib.h>


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int  target = 4;

    int result = linearSearch(arr, n, target);
    printf("Index of %d is %d.\n", target, result);


    return EXIT_SUCCESS;
}