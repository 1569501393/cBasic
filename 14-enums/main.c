#include <stdio.h>

enum DAY {
    MON = 1,
    TUS,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
};

int main() {


    enum DAY day;
    day = WED;
    printf("%d\n", day); // 输出 3

    for (day = MON; day <= SUN; ++day) {
        printf("%d\n", day);
    }

    return 0;
}