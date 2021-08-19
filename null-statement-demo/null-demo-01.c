#include <stdio.h>

int main( ) {
    char *text;
    while ((*text++ = getchar()) != '\n')
        ; // null statement

    char *c; // ?
    for (; (c = getchar()) != EOF; putchar(c))
        ; // null statement
    
    for (int count = 0; getchar() != EOF; ++count) 
        ; // null statement
    
    // while ((*to++ = *from++) != '\0')
    //     ; // null statement
    
    return 0;
}