#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf;

int main( ) {
    // int i = setjmp(buf);
    // printf("i=%d \n", i); // i=0


    // int i = setjmp(buf);
    // printf("i=%d \n", i);  // i=42 // infinite loop here
    // longjmp(buf, 42);


    int i = setjmp(buf);
    printf("i=%d \n", i); // i=0 // i=42
    if (i != 0) exit(0);
    longjmp(buf, 42);

    return 0;
}