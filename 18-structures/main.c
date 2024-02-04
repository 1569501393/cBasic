#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

/* function declare */
void printBook(struct Books book);

/* 指向结构的指针 */
void printBook2(struct Books *book);

int main() {
    // 输出结构体变量 book 的内容
    printf("书标题 : %s\n", book.title);
    printf("书作者 : %s\n", book.author);
    printf("书类目 : %s\n", book.subject);
    printf("书 ID : %d\n", book.book_id);


    struct Books book1;
    struct Books book2;

    // book1.author = "Cay Horstmann";
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    printBook(book2);
    printBook2(&book2);

    printBook(book1);
    printBook2(&book1);



    return 0;
}

void printBook(struct Books book) {
    printf("printBook\n");
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}

void printBook2(struct Books *book2) {
    printf("printBook2\n");
    printf("Book title : %s\n", book2->title);
    printf("Book author : %s\n", book2->author);
    printf("Book subject : %s\n", book2->subject);
    printf("Book book_id : %d\n", book2->book_id);
}