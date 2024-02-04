#include <stdio.h>
#include <string.h>



typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

// define
#define TRUE 1
#define FALSE 0

int main() {
    struct Books book1;
    // Book book1;
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 123456;

    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 id : %d\n", book1.book_id);

    printf("TRUE=%d\n", TRUE);
    printf("FALSE=%d\n", FALSE);

    return 0;
}