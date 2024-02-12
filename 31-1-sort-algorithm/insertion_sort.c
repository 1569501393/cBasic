#include <stdio.h>

/* 打印数组方法 */
void printf_arr(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

/* 排序方法 */
void insertion_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len; ++i) {
        printf("debug i = %d start===============\n", i);
        temp = arr[i];

        for (j = i; j > 0 && arr[j - 1] > temp; --j) {
            printf("debug temp = %d, arr[%d] = %d, arr[%d] = %d \n", temp, j, arr[j], j - 1, arr[j - 1]);
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;

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
    insertion_sort(arr, len);
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}