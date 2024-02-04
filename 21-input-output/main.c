#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    // float f;
    // printf("enter a number\n");
    // scanf("%f",&f);
    // printf("the number is %f\n",f);

    // int c;
    // printf("enter a value\n");
    // c = getchar();
    //
    // // printf("the value is %d\n",c);
    // printf( "\nYou entered: ");
    // putchar(c);
    // printf("\n");

    char str[100];
    // printf("enter a string\n");
    // fgets(str, sizeof(str), stdin);
    //
    // printf("the string is %s\n",str);
    // puts(str);

    int i;
    printf("enter a number\n");
    scanf("%s %d",str, &i);

    printf("the string is %s and the number is %d\n",str,i);

    return 0;
}