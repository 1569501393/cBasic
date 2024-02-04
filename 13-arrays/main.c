#include <stdio.h>

int main() {
    // 声明数组
    double blance[10];

    // 初始化数组
    // double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};

    // 访问数组元素
    double salary = balance[0];
    printf("第一个元素的值为: %f\n", salary);

    int n[10];
    int i, j;

    for (i = 0; i < 10; ++i) {
        n[i] = i + 100;
    }

    for (j = 0; j < 10; ++j) {
        printf("Element[%d] = %d\n", j, n[j]);
    }

    // 获取数组长度
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("数组长度: %d\nsizeof(numbers):%lu\nsizeof(numbers[0]):%lu\n", length, sizeof(numbers), sizeof(numbers[0]));

    return 0;
}