#include <stdio.h>
#include <stdlib.h>

#define MAX 255

int main( ) {
    FILE *fp = NULL;
    char words[MAX];

    if ((fp = fopen("data.txt", "a+")) == NULL){
        fprintf(stdout, "Can't open file... \n");
        exit(EXIT_FAILURE);
    }

    puts("Enter words or # from the line beginning to exit");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
    //                      line width
        fprintf(fp, "%s \n", words);
    }
    
    puts("File contents: ");
    rewind(fp); // go back to the beginning of file 

    while ((fscanf(fp, "%s", words) == 1)) {
        puts(words);
    }
    puts("Done");

    if (fclose(fp) != 0){
        fprintf(stderr, "Error closing file \n");
    }

    return 0;
}