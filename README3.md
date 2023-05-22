[toc]
# cBasic

## 1. 语言教程(Language Tutorial)

## 2. 简介(Introduction)

## 3. 程序结构(Program Structure)

## 4. 数据结构(Data Structure)

## 5. 变量(Variables)

## 6. 常量(Constants)

## 7. 存储类(Storage Classes)

## 8. 运算符(Operators)

## 9. 判断(Decision Making)

## 10. 循环(Loops)

## 11. 函数(Functions)

## 12. 作用域规则(Scope Rules)

## 13. 数组(Arrays)

## 14. enum(枚举)(Enumerations)

## 15. 指针(Pointers)

## 16. 函数指针与回调函数(Function Pointers and Callbacks)

## 17. 字符串(Strings)

## 18. 结构体(Structures)

## 19. 共同体(Unions)

## 20. typedef(typedef)

## 21. 输入输出(Input/Output)

## 22. 文件读写(File Handling)

## 23. 预处理器(Preprocessors)

## 24. 头文件(Header Files)

## 25. 强制类型转化(Type Casting)

## 26. 错误处理(Error Handling)

## 27. 递归(Recursion)

## 28. 可变参数(Variable Arguments)

## 29. 内存管理(Memory Management)

## 30. 命令行参数(Command Line Arguments)

## 31. 语言实例(Language Examples)

## 32. 经典100例(Classic 100 Examples)







# 3天学习计划

好的，这里为您制定一个大致的3天学习计划，并推荐一些优秀的教程和资源。

## 第1天

### 学习目标：

- 了解C语言的基本语法和程序结构；
- 掌握变量、常量、存储类、运算符等概念；
- 理解判断、循环等基本控制语句的使用。

### 推荐教程：

- 菜鸟教程 [http://www.runoob.com/cprogramming/c-tutorial.html](http://www.runoob.com/cprogramming/c-tutorial.html)
- 廖雪峰的C语言教程 [https://www.liaoxuefeng.com/wiki/1252599548343744](https://www.liaoxuefeng.com/wiki/1252599548343744)

### 最佳实践：

- 多写代码，多练习，熟悉基本语法和控制语句；
- 了解常见的C编译器，例如gcc、clang等；
- 熟悉基本的调试方法，例如使用printf语句输出调试信息等。

## 第2天

### 学习目标：

- 熟悉数组、字符串、指针等数据类型；
- 理解函数、作用域和文件读写等概念。

### 推荐教程：

- C语言中文网 [http://c.biancheng.net/c/](http://c.biancheng.net/c/)
- C语言中文网教程 [http://c.biancheng.net/view/2238.html](http://c.biancheng.net/view/2238.html)

### 最佳实践：

- 熟悉常见的数组、字符串的操作方法；
- 理解指针的使用和内存管理；
- 掌握文件读写的基本方法。

## 第3天

### 学习目标：

- 熟悉结构体、共用体和枚举等高级数据类型；
- 了解预处理器、头文件等相关知识；
- 掌握常见的C编程技巧和调试方法。

### 推荐教程：

- C语言中文网 [http://c.biancheng.net/c/](http://c.biancheng.net/c/)
- C语言-面向信息学竞赛的题解与习题集（第二版）[https://www.ituring.com.cn/book/2671](https://www.ituring.com.cn/book/2671)

### 最佳实践：

- 完成几个实际的项目，例如编写一个简单的计算器等；
- 使用版本控制系统，例如Git等；
- 阅读优秀的C语言代码，学习其编码风格和技巧。



# 三套优秀的C源码

好的，以下是另外三套优秀的C源码：

### 1. Redis

Redis是一个高性能、基于键值对存储的NoSQL数据库，其源码使用C语言实现。Redis支持多种数据结构（字符串、哈希、列表、集合、有序集合等），并且提供了许多高级功能，例如发布/订阅、事务、Lua脚本等。它代码清晰易懂，注释详尽，非常适合提升C语言编程技巧和扩展应用开发能力。

GitHub链接：[https://github.com/redis/redis](https://github.com/redis/redis)

### 2. libevent

libevent是一个事件驱动的网络编程库，它使用C语言实现，通过封装底层操作系统接口，提供了跨平台的高效网络编程接口。libevent支持多种网络协议（TCP、UDP、HTTP、DNS等），并且具有良好的可扩展性。阅读libevent源码，可以学习到事件驱动编程、网络协议实现等知识。

GitHub链接：[https://github.com/libevent/libevent](https://github.com/libevent/libevent)

### 3. OpenCV

OpenCV是一个跨平台的计算机视觉库，其源代码使用C++和C语言实现。OpenCV支持多种计算机视觉算法和技术，例如图像处理、目标检测、人脸识别等。通过阅读OpenCV源码，可以学习到常用的计算机视觉算法和实现思路，进一步提高自己的编程技能和开发能力。

GitHub链接：[https://github.com/opencv/opencv](https://github.com/opencv/opencv)

以上三个源码在各自领域都非常优秀，并且具有广泛的应用价值，在阅读这些源码的过程中，可以更深入地了解各种计算机技术的具体实现方式，进而提高自己的编程水平和技能。



# C语言连接MySQL

在使用C语言连接MySQL时，以下是结构最佳实践和说明理由：

1. 包含头文件

在连接MySQL数据库之前，应该包含MySQL的客户端库头文件。建议使用mysql.h中定义的API进行编程，这样可以确保代码兼容性和可移植性。包含头文件的代码示例如下：

   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include "mysql.h"  // 包含MySQL头文件
   ```

2. 建立连接

在使用MySQL之前，必须先建立与MySQL服务器的连接。连接过程需要指定MySQL服务器的地址、用户名、密码和要使用的数据库名等信息。连接成功后，可以执行SQL语句、获取结果集等操作。建立连接的代码示例如下：

   ```c
   MYSQL *conn;  // 定义MySQL连接对象

   conn = mysql_init(NULL);  // 初始化连接对象

   if (!mysql_real_connect(conn, "localhost", "user", "password", "database", 0, NULL, 0)) {
       fprintf(stderr, "%s\n", mysql_error(conn));
       exit(1);
   }
   ```

3. 执行SQL语句

建立连接之后，可以执行SQL语句，并获取结果集（如果有）。在执行SQL语句之前，需要先将SQL语句保存到一个字符串中，然后调用mysql_query()函数执行SQL语句。执行SQL语句并获取结果集的代码示例如下：

   ```c
   MYSQL_RES *result;  // 定义结果集对象
   MYSQL_ROW row;      // 定义行数据对象
   int num_fields;     // 列数

   if (mysql_query(conn, "SELECT id, name, age FROM users")) {
       fprintf(stderr, "%s\n", mysql_error(conn));
       exit(1);
   }

   result = mysql_use_result(conn);  // 获取结果集

   if (result) {
       num_fields = mysql_num_fields(result);  // 获取列数

       while ((row = mysql_fetch_row(result))) {  // 循环获取行数据
           for (int i = 0; i < num_fields; i++) {
               printf("%s ", row[i] ? row[i] : "NULL");
           }
           printf("\n");
       }

       mysql_free_result(result);  // 释放结果集对象
   }
   ```

4. 关闭连接

在完成所有操作后，应该及时关闭与MySQL服务器的连接。关闭连接可以释放资源，避免资源泄漏。关闭连接的代码示例如下：

   ```c
   mysql_close(conn);  // 关闭连接
   ```

以上是C语言连接MySQL的最佳实践，这样的程序结构可以使代码清晰易读、可移植、易于维护。





# GCC

```
jieqiang@DESKTOP-00L3EF7: ~/lfdev/wwwroot/c/cBasic/01-tutorial dev ⚡ $ gcc -v                                                              (73s)[8:29:55]
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 11.3.0-1ubuntu1~22.04.1' --with-bugurl=file:///usr/share/doc/gcc-11/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-11 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-11-aYxV0E/gcc-11-11.3.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-11-aYxV0E/gcc-11-11.3.0/debian/tmp-gcn/usr --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 11.3.0 (Ubuntu 11.3.0-1ubuntu1~22.04.1)
jieqiang@DESKTOP-00L3EF7: ~/lfdev/wwwroot/c/cBasic/01-tutorial dev ⚡ $ 



PS C:\Users\jieqiang> D:/software/JetBrains/CLion20220103/bin/mingw/bin/gcc.exe -v
Using built-in specs.
COLLECT_GCC=D:\software\JetBrains\CLion20220103\bin\mingw\bin\gcc.exe
COLLECT_LTO_WRAPPER=D:/software/JetBrains/CLion20220103/bin/mingw/bin/../libexec/gcc/x86_64-w64-mingw32/11.2.0/lto-wrapper.exe
Target: x86_64-w64-mingw32
Configured with: ../gcc-11.2.0/configure --host=x86_64-w64-mingw32 --target=x86_64-w64-mingw32 --build=x86_64-alpine-linux-musl --prefix=/win --enable-checking=release --enable-fully-dynamic-string --enable-languages=c,c++ --enable-libatomic --enable-libgomp --enable-libstdcxx-filesystem-ts=yes --enable-libstdcxx-time=yes --enable-seh-exceptions --enable-shared --enable-static --enable-threads=posix --enable-version-specific-runtime-libs --disable-bootstrap --disable-graphite --disable-libada --disable-libstdcxx-pch --disable-libstdcxx-debug --disable-libquadmath --disable-lto --disable-nls --disable-multilib --disable-rpath --disable-symvers --disable-werror --disable-win32-registry --with-gnu-as --with-gnu-ld --with-system-libiconv --with-system-libz --with-gmp=/win/makedepends --with-mpfr=/win/makedepends --with-mpc=/win/makedepends
Thread model: posix
Supported LTO compression algorithms: zlib
gcc version 11.2.0 (GCC)
PS C:\Users\jieqiang>



```

