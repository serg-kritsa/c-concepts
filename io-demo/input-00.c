#include <stdio.h>
#include <ctype.h>

// int getc(FILE *stream);
// int getchar(void);
// int ungetc(int ch, FILE *stream);

int main( ) {
    // // demo 01
    // char ch = ' \0';
    // FILE *fp;
    // if (fp = fopen("someFile.c", "rw")) {
    //     ch = getc(fp);
    //     while (ch != EOF) {
    //         ch = getc(fp);
    //     }
    //     fclose(fp);
    // }
    
    // // demo 02
    // char ch = ' \0';
    // ch = getc(stdin);
    // printf("%c\n", ch);

    // // demo 03
    // printf("%c\n", getchar());

    // // demo 04
    // int ch = 0;
    // while ((ch = getchar()) != EOF)
    //     printf("read in character is %c\n", ch);

    // // demo 05
    // FILE *fp = NULL;
    // char ch = '\0';
    // fp = fopen("myFile.c", "r"); // opening an existing file
    // if (fp = NULL) printf("Could not open file myFile.c");
    // printf("Reading");
    // while ( 1 ) {
    //     ch = fgetc(fp);
    //     if (ch == EOF) break;
    //     printf("%c",ch);
    // }
    // printf("Closing");
    // fclose(fp);

    // // demo 06
    char ch = 0;
    while (isspace(ch = (char)getchar())); // keep reading until we don't have a space // read as long as there are space
    ungetc(ch, stdin); // put back the nonspace character
    printf("char is %c ", getchar());





    // printf("=%d ", );
    // printf("=%d ", );
    // printf("\t");
    // printf("\n");

    return 0;
}