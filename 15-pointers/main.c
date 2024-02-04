#include <stdio.h>

int main() {
    int var_runoob = 10;
    int *p_var_runoob;
    p_var_runoob = &var_runoob;
    // var_runoob: 10
    printf("var_runoob: %d\n", var_runoob);

    // var_runoob: 0x7ffc1040fc2c
    printf("var_runoob: %p\n", &var_runoob);

    // Address of the variable: 0x7ffc1040fc2c
    printf("Address of the variable: %p\n", p_var_runoob);

    int *p;
    p = &var_runoob;
    printf("Value of the variable: %d\n", *p);
    printf("Value of the variable: %p\n", p);

    int var = 20;
    int *ip;
    ip = &var;
    // Address of var variable: 0x7ffeb13378fc
    printf("Address of var variable: %p\n", &var);

    // Address stored in ip variable: 0x7ffeb13378fc
    printf("Address stored in ip variable: %p\n", ip);

    // Value of *ip variable: 20
    printf("Value of *ip variable: %d\n", *ip);


    // NULL pointer
    int *ptr = NULL;
    // ptr: (nil)
    printf("ptr: %p\n", ptr);

    return 0;
}