#include <stdio.h>

void printf_arr(int arr[], int len) {
    int i;
    for (i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

void bubble_sort(int arr[], int len) {
    printf_arr(arr, len);

    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        printf("debug i = %d start===============\n", i);
        for (j = 0; j < len - 1 - i; ++j) {
            printf("debug j = %d \n", j);
            // printf("debug arr[j] = %d, arr[j+1] = %d \n", arr[j], arr[j + 1]);
            printf("debug arr[%d] = %d, arr[%d] = %d \n", j, arr[j], j + 1, arr[j + 1]);
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                printf("debug temp = %d \n", temp);

                arr[j] = arr[j + 1];
                // printf("debug arr[j] = %d, arr[j+1] = %d \n", arr[j], arr[j + 1]);
                printf("debug arr[%d] = %d, arr[%d] = %d \n", j, arr[j], j + 1, arr[j + 1]);


                arr[j + 1] = temp;
                // printf("debug arr[j] = %d, arr[j+1] = %d \n", arr[j], arr[j + 1]);
                printf("debug arr[%d] = %d, arr[%d] = %d \n", j, arr[j], j + 1, arr[j + 1]);
            }
        }

        // printf("debug arr = %d end=============== \n", *arr);
        printf("debug i = %d end=============== \n", i);
        printf_arr(arr, len);
    }
}


int main() {
    // int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(*arr);
    printf("sizeof(arr) = %lu, sizeof(*arr) = %lu \n", sizeof(arr), sizeof(*arr));
    // int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, len);
    // int i;
    // for (i = 0; i < len; ++i) {
    //     printf("%d ", arr[i]);
    // }
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}