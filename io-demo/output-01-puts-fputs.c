#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int fputs(const char * buffer, FILE *filePtr);

int main( ) {
    // // demo 01
    // char string[40];
    // strcpy(string, "Hello, world");
    // puts(string); // always from new line 

    FILE *fp = NULL;
    fp = fopen("somefile.txt", "w"); // open for writing
    if (fp) exit(1);
    fputs("Hello, world", fp);
    fclose(fp);

    return 0;
}