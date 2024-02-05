#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *local_time;
    char datetime[20];  // 用于存储格式化后的日期时间字符串

    // 获取当前时间
    now = time(NULL);
    local_time = localtime(&now);

    // 格式化日期时间字符串
    strftime(datetime, 20, "%Y-%m-%d %H:%M:%S", local_time);

    // 输出格式化后的日期时间字符串
    printf("Current date and time: %s\n", datetime);

    return 0;
}
