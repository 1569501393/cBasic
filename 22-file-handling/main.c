#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    time_t now;
    struct tm *local_time;
    char datetime[20];  // 用于存储格式化后的日期时间字符串

    // 获取当前时间
    now = time(NULL);
    local_time = localtime(&now);

    // 格式化日期时间字符串
    strftime(datetime, 20, "%Y-%m-%d %H:%M:%S", local_time);

    FILE *fp = NULL;
    // fp = fopen("./test.txt", "w+");
    // fp = fopen("./test.txt", "a+");
    fp = fopen("./test.txt", "a+");

    // fprintf(fp, "This is testing for fprintf...\n");
    // fputs("This is testing for fputs...\n", fp);
    fputs(strcat(datetime, "   \n"), fp);

    char buff[255];
    fgets(buff, 255, fp);
    printf("%s \n", buff);

    int i = fclose(fp);
    printf("fclose: %d\n", i);

    return 0;
}