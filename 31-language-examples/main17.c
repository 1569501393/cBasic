#include <stdio.h>
#include <math.h>

int main() {
    /* C 语言实例 - 一元二次方程
     * 求一元二次方程：ax2+bx+c=0 的根。
        输入三个实数a,b,c的值，且a不等于0。
        输入方程的三个系数:1 2 1
        -1.00 -1.00
     * */
    printf("Hello, World!\n");

    float a, b, c, x1, x2, d;
    printf("请输入一元二次方程的系数a,b,c的值：\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        x1 = x2 = -c / b;
    } else {
        d = sqrt(b * b - 4 * a * c);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
    }
    printf("方程的根为：x1=%.2f,x2=%.2f\n", x1, x2);

    return 0;
}

