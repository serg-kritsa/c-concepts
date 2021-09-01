#include <stdio.h>
#include <string.h>

// char *  fgets (char *__restrict, int, FILE *__restrict);
// char 	*strchr (const char *, int);
int main( ) {
    // // demo 01
    // fgets(buf, sizeof(buf), stdin);
    // printf("buffer contains: %s\n", buf);
    // // az
    // // buffer contains: az

    // // demo 02
    // if (fgets(buf, sizeof(buf), stdin)) {
    //     printf("Text in IF \n");
    // }
    // printf("buffer contains: %s\n", buf);
    // // az
    // // Text in IF 
    // // buffer contains: az

    // // demo 03
    // char *text;
    // while ((*text++ = getchar()) != '\n')
    //     ; // null statement
    // printf("%s\n",*text);
    // // az

    // // demo 04
    // int tmp;
    // while ( ((tmp = getchar()) != '\n') ) {
    //     printf("%c ",tmp); // will be printed after pressing Enter
    // }
    // printf("\n");
    // // az
    // // a z 


    // // demo 04
    // char buf[255];
    // int tmp = 'a';
    // printf("Enter to fgets buffer: ");
    // if (fgets(buf, sizeof(buf), stdin)) {
    //     printf("Enter to getchar output: ");
    //     while (((tmp = getchar()) != '\n')) {
    //     // while (((tmp = getchar()) != '\n') && !feof(stdin) && !ferror(stdin)) {
    //         printf("=%c ",tmp); // available only inside WHILE
    //     }
    //     printf("\n");
    // }
    // printf("fgets buffer contains: %s, getchar buffer contains: %d %c", buf, tmp, tmp);
    // // Enter to fgets buffer: qq
    // // Enter to getchar output: aa
    // // =a =a 
    // // fgets buffer contains: qq // why new line?
    // // , getchar buffer contains: 10 // why 10 and empty?

    // // demo 05
    // char buf[255];
    // char *p = NULL;
    // printf("Enter to fgets: ");
    // if (fgets(buf, sizeof(buf), stdin)) {
    //     p = strchr(buf, '\n'); // find in string, return pointer of 1st occurance
    //     if (p) {
    //         printf("found: address=%x  code=%d \n", p, *p); // address code
    //         *p = '!'; // replace found symbol w/ new one
    //     }
    //     else printf("not found \n");
    // }
    // printf("fgets buffer contains: %s\n", buf);
    // // Enter to fgets: az
    // // found: address=ffffcb02  code=10 
    // // fgets buffer contains: az!

    // // demo 0
    char buf[255];
    int ch = '\0';
    char *p = NULL;

    if (fgets(buf, sizeof(buf), stdin)) {
        p = strchr(buf, 'a'); // find in string, return pointer of 1st occurance
        if (p) {
            *p = '@';
            printf("replaced the first found 'a' to '@' \n");
        }
        else {
            printf("Entered chars will be lost: ");
            while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        }
    }
    else {
        // fgets failed, handle error
    }
    printf("buffer contains: %s \n", buf);
    // // input 1
    // aa
    // replaced the first found 'a' to '@' 
    // buffer contains: @a
    // // input 2
    // qw
    // Entered chars will be lost: aa
    // buffer contains: qw

    return 0;
}