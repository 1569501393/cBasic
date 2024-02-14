#include <stdio.h>

int main() {
    /* C 语言实例 - 输出浮点数 */
    float  f;
    f = 3.141592654;
    // 3.141593
    printf("%f\n", f);
    // 3.1415927410
    printf("%.10f\n", f);

    return 0;
}