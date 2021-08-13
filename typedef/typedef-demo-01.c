#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {

   Book book;
 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
 
   printf( "Book title : %s\n", book.title);        // Book  title : C Programming
   printf( "Book author : %s\n", book.author);      // Book  author : Nuha Ali
   printf( "Book subject : %s\n", book.subject);    // Book  subject : C Programming Tutorial
   printf( "Book book_id : %d\n", book.book_id);    // Book  book_id : 6495407

   return 0;
}
