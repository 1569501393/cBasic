#include <stdio.h>
#include <string.h>

int main() {
    char site[] = "RUNOOB.COM";
    // 站点名: RUNOOB.COM
    printf("站点名: %s\n", site);

    /* 字符串函数 */
    char str1[] = "runoob";
    char str2[14] = "google";
    char str3[14];

    strcpy(str3, str1);

    // strcpy( str3, str1) :  runoob
    printf("strcpy( str3, str1) :  %s\n", str3);

    // strcmp(str1, str2) : 11
    printf("strcmp(str1, str2) : %d\n", strcmp(str1, str2));

    // strcat( str1, str2):  runoobgoogle
    printf("strcat( str1, str2):  %s\n", strcat(str1, str2));

    // str1:  runoobgoogle
    printf("str1:  %s\n", str1);

    // strlen(str1):  12
    printf("strlen(str1):  %d\n", strlen(str1));

    return 0;
}