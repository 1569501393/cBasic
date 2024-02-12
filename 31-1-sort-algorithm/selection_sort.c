#include <stdio.h>

/* 打印数组方法 */
void printf_arr(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

/* 排序方法 */
void selection_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; ++i) {
        printf("debug i = %d start===============\n", i);
        int min = i;
        for (j = i + 1; j < len; ++j) {
            printf("debug j = %d \n", j);
            // printf("debug arr[j] = %d, arr[j+1] = %d \n", arr[j], arr[j + 1]);
            printf("debug arr[%d] = %d, arr[%d] = %d \n", j, arr[j], min, arr[min]);
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            printf("debug arr key=min=%d != i=%d, arr[%d]=%d \n", min, i, min, arr[min]);
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        printf("debug i = %d end=============== \n", i);
        printf_arr(arr, len);
    }
}

/* 主函数 */
int main() {
    printf("hello world \n");
    int arr[] = {3, 2, 1};
    // int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, len);
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}