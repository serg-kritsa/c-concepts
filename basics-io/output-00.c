#include <stdio.h>

// int putchar(int c);
// int fputc(int ch, FILE *stream);

int main( ) {
    // // demo 01
    // char ch = 'q';
    // putc(ch, stdout);

    // // demo 02
    // char ch = '\0';
    // FILE *fp = NULL;
    // if (fp = fopen("someFile.c", "rw")) {
    //     ch = getc(fp);
    //     while (ch != EOF) {
    //         // write & read until reaches the end
    //         putc(ch, fp);
    //         ch = getc(fp);
    //     }
    //     fclose(fp);
    // }
    
    // // demo 03
    // // skip \n
    // char string[] = "Hello, \nworld";
    // int i = 0;
    // while (string[i] != '\0') {
    //     if (string[i] != '\n') putchar(string[i]);
    //     ++i;
    // }
    
    // // demo 04
    // //usage: type aa, press Ctrl+D, will be aaaa
    // int ch = 0;
    // while ((ch = getchar()) != EOF) putchar(ch);
    // ungetc(ch, stdin);

    // // demo 05
    FILE *pFile = NULL;
    char ch = '\0';
    pFile = fopen("someFile.txt", "w");
    if (pFile != NULL) {
        for (ch = 'A'; ch <= 'Z'; ch++) {
            // putc(ch, stdout); // write on console
            putc(ch, pFile); // write in file
        }
        fclose(pFile);
    }

    return 0;
}