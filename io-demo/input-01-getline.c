#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( ) {
    // // demo 01
    // char *buffer = NULL;
    // size_t bufsize = 32;
    // size_t characters;

    // buffer = (char *)malloc(bufsize * sizeof(char));
    // if (buffer == NULL) exit(1);
    
    // printf("Type something: ");
    // characters = getline(&buffer, &bufsize, stdin);
    // printf("%zu characters were read. \n", characters); // %zu to print size_t type
    // printf("You typed: '%s'", buffer);
    // // Type something: q a z
    // // 6 characters were read. // why 6 ?
    // // You typed: 'q a z
    // // ' // why starts new line after %s ?

    // // demo 02
    char buffer[32];
    char *b = buffer;
    size_t bufsize = 32;
    size_t characters;

    printf("Type something: ");
    characters = getline(&b, &bufsize, stdin);
    printf("%zu characters were read. \n", characters); // %zu to print size_t type
    printf("You typed: '%s'", buffer);
    // // Type something: q a z
    // // 6 characters were read. // why 6 ?
    // // You typed: 'q a z
    // // ' // why starts new line after %s ?




    return 0;
}