#include <stdio.h>
#include <stdlib.h>

/* 获取最小值 */
int min(int x, int y) {
    return x < y ? x : y;
}

/* 打印数组方法 */
void printf_arr(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

/* 排序方法 */
void merge_sort(int arr[], int len) {
    int *a = arr;
    int *b = malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) {
        for (start = 0; start < len; start += seg + seg) {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if (a != arr) {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);

}

/* 主函数 */
int main() {
    printf("hello world \n");
    int arr[] = {3, 2, 1};
    // int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, len);
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}