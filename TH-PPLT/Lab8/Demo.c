#include <stdio.h>
#include <string.h>
#define SIZE 100
struct Book {
    char title[SIZE];
    char author[SIZE];
    int book_id;
};
void printInfo (struct Book);
int main(int argc, char const *argv[])
{
    struct Book book1, book2;
    // book 1 specification
    strcpy(book1.title, "C Programming Language");
    strcpy(book1.author, "Brian W. Kernighan");
    book1.book_id = 1001;
    // // book 2 specification
    strcpy (book2.title, "C: How to Program");
    strcpy (book2.author, "Paul Deitel");
    book2.book_id = 1002;
    // print bookl info
    printInfo (book1);
    // print book2 info
    printInfo (book2);
    return 0;
}
void printInfo (struct Book book)
{
    printf( "Title : %s\n", book.title);
    printf( "Author %s\n", book.author);
    printf( "book_id : %d\n", book.book_id);
}