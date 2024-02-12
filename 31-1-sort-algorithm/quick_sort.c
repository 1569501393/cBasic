#include <stdio.h>
#include <stdlib.h>

typedef struct _Range{
    int start, end;
} Range;

Range new_Range(int s, int e) {
    Range  r;
    r.start= s;
    r.end = e;
    return r;
}

/* 获取最小值 */
int min(int x, int y) {
    return x < y ? x : y;
}

/* 交换值 */
void swap (int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

/* 打印数组方法 */
void printf_arr(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

/* 排序方法 */
void quick_sort(int arr[], int len) {
    if (len <= 0)
        return; // 避免len等於負值時引發段錯誤（Segment Fault）
    // r[]模擬列表,p為數量,r[p++]為push,r[--p]為pop且取得元素
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end) / 2]; // 選取中間點為基準點
        int left = range.start, right = range.end;
        do
        {
            while (arr[left] < mid) ++left;   // 檢測基準點左側是否符合要求
            while (arr[right] > mid) --right; //檢測基準點右側是否符合要求

            if (left <= right)
            {
                swap(&arr[left],&arr[right]);
                left++;right--;               // 移動指針以繼續
            }
        } while (left <= right);

        if (range.start < right) r[p++] = new_Range(range.start, right);
        if (range.end > left) r[p++] = new_Range(left, range.end);
    }
}

/* 主函数 */
int main() {
    printf("hello world \n");
    int arr[] = {3, 2, 1};
    // int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, len);
    printf("排序结果为===\n");
    printf_arr(arr, len);

    return 0;
}