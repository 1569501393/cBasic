#include <stdio.h>
#include <string.h>

union  Data {
    int i;
    float f;
    // double d;
    char str[20];
};

int main() {
    union Data data;
    // Size of union: 20
    printf("Size of union: %lu\n", sizeof(data));

    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    // 在这里，我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因。
    // data.i : 1917853763
    printf("data.i : %d\n", data.i);
    // data.f : 4122360580327794860452759994368.000000
    printf("data.f : %f\n", data.f);
    // data.str : C Programming
    printf("data.str : %s\n", data.str);


    // 现在让我们再来看一个相同的实例，这次我们在同一时间只使用一个变量，这也演示了使用共用体的主要目的：
    data.i = 10;
    // data.i : 10
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    // data.f : 220.500000
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    // data.str : C Programming
    printf("data.str : %s\n", data.str);


    return 0;
}