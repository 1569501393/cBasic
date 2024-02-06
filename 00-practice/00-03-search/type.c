#include <stdio.h>
#include <stdlib.h>

void keyword() {
    printf("C 语言的全部关键字包括标准 C89、C99、C11 和 C17 标准中定义的关键字，以及部分编译器特定的扩展关键字。以下是 C 语言的全部关键字列表：\n"
           "\n"
           "```plaintext\n"
           "auto        break       case        char        const       continue\n"
           "default     do          double      else        enum        extern\n"
           "float       for         goto        if          inline      int\n"
           "long        register    restrict    return      short       signed\n"
           "sizeof      static      struct      switch      typedef     union\n"
           "unsigned    void        volatile    while       _Alignas    _Alignof\n"
           "_Atomic     _Bool       _Complex    _Generic    _Imaginary  _Noreturn\n"
           "_Static_assert  _Thread_local   alignas     alignof     atomic_bool\n"
           "atomic_char     atomic_int   atomic_long  atomic_ptrdiff_t  atomic_short\n"
           "atomic_sizet    atomic_uchar    atomic_uint atomic_ulong     atomic_ushort\n"
           "_Bool       complex     generic     imaginary   noreturn    static_assert\n"
           "thread_local\n"
           "\n"
           "// C11 标准新增的关键字\n"
           "_Alignas    _Alignof    _Atomic     _Bool       _Complex    _Generic\n"
           "_Imaginary  _Noreturn   _Static_assert  _Thread_local\n"
           "\n"
           "// C11 标准保留但未使用的关键字\n"
           "_Bool       _Imaginary  _Complex\n"
           "\n"
           "// C17 标准新增的关键字\n"
           "atomic_bool     atomic_char     atomic_int     atomic_long\n"
           "atomic_sizet    atomic_uchar    atomic_uint    atomic_ulong\n"
           "```\n"
           "\n"
           "这些关键字具有特殊含义，不能用作变量名或其他标识符。在编写 C 语言代码时，要避免将关键字用作标识符，以免引起编译错误。\n"
           "\n"
           "如果你有任何其他问题或需要进一步了解，请随时告诉我。我很乐意帮助你。");
}

void data_type() {
    printf("C语言的数据类型\n");
    printf("在 C 语言中，变量类型可以分为基本数据类型和派生数据类型。以下是 C 语言中常见的变量类型：\n"
           "\n"
           "    ### 基本数据类型：\n"
           "    1. **整型（Integer Types）**：\n"
           "       - char：字符型，通常占用一个字节。\n"
           "       - int：整型，通常占用四个字节。\n"
           "       - short：短整型，通常占用两个字节。\n"
           "       - long：长整型，通常占用四个字节。\n"
           "       - long long：长长整型，通常占用八个字节。\n"
           "\n"
           "    2. **浮点型（Floating-Point Types）**：\n"
           "       - float：单精度浮点型，通常占用四个字节。\n"
           "       - double：双精度浮点型，通常占用八个字节。\n"
           "       - long double：长双精度浮点型，占用字节数较大。\n"
           "\n"
           "    ### 构造类型（Derived Types）：\n"
           "    1. **数组（Array）**：由相同类型的元素组成的有序集合。\n"
           "    2. **指针（Pointer）**：存储变量地址的数据类型。\n"
           "    3. **结构体（Structure）**：不同类型的变量组合而成的数据结构。\n"
           "    4. **共用体（Union）**：不同类型的变量共享同一块内存空间。\n"
           "    5. **枚举（Enumeration）**：用户定义的枚举类型。\n"
           "\n"
           "    ### 空类型（Void Type）：\n"
           "    - void：表示没有类型。通常用于函数返回类型或指针类型。\n"
           "\n"
           "    这些是 C 语言中常见的变量类型，每种类型在内存中占用的字节数可能会根据编译器和系统的不同而有所变化。合理选择适当的变量类型可以提高程序的效率和可读性。如果有任何其他问题或需要进一步了解，请随时告诸我。"
           ""
           "\n");

    // 基本数据类型 整型 浮点型
    int size_of_int = sizeof(int);
    // Size of int: 4 bytes
    printf("Size of int: %d bytes\n", size_of_int);
    int size_of_float = sizeof(float);
    // Size of float: 4 bytes
    printf("Size of float: %d bytes\n", size_of_float);

    int size_of_double = sizeof(double);
    // Size of double: 8 bytes
    printf("Size of double: %d bytes\n", size_of_double);

    int size_of_char = sizeof(char);
    // Size of char: 1 bytes
    printf("Size of char: %d bytes\n", size_of_char);

    // 构造类型 数组, 指针, 结构体, 共用体, 枚举
    int arr[3];
    int size_of_arr = sizeof(arr);
    // Size of array: 12 bytes
    printf("Size of array: %d bytes\n", size_of_arr);

    int i = 1;
    int *ptr = &i;
    printf("Size of pointer: %lu bytes, i = %p\n", sizeof(ptr), ptr);

    // 空类型
    int size_of_void = sizeof(void);
    printf("Size of void: %d bytes\n", size_of_void);
}

int main() {
    keyword();
    data_type();
    // num[0] = 1
    // num[1] = 2
    // num[2] = 3
    // num[3] = 0
    // num[4] = 0
    int num[5] = {1, 2, 3};
    int numx[] = {1, 2, 3};
    int len = sizeof(num) / sizeof(num[0]);
    int lenx = sizeof(numx) / sizeof(numx[0]);

    // 数组长度为：len = 5, lenx = 3, 数组占用空间 num = 20, numx = 12
    printf("数组长度为：len = %d, lenx = %d, 数组占用空间 num = %lu, numx = %lu\n", len, lenx, sizeof(num),
           sizeof(numx));
    // num[5] = 0
    printf("num[%d] = %d\n", 5, num[5]);

    // numx[5] = 3
    printf("numx[%d] = %d\n", 5, numx[5]);

    // num[0] = 1, numx[0] = 1
    // num[1] = 2, numx[1] = 2
    // num[2] = 3, numx[2] = 3
    // num[3] = 0, numx[3] = 1
    // num[4] = 0, numx[4] = 2
    for (int i = 0; i < len; ++i) {
        printf("num[%d] = %d, ", i, num[i]);
        printf("numx[%d] = %d\n", i, numx[i]);
    }

    return EXIT_SUCCESS;
}