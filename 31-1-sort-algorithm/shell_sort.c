#include <stdio.h>

/* 打印数组方法 */
void printf_arr(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

/* 排序方法 */
void shell_sort(int arr[], int len) {
    int i, j, temp, gap;
    for (gap = len >> 1; gap > 0; gap = gap >> 1) {
        for (i = gap; i < len; ++i) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}

/* 主函数 */
int main() {
    printf("hello world \n");
    int arr[] = {3, 2, 1};
    // int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    shell_sort(arr, len);
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}