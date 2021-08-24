#include <stdio.h>

#define MY_DEF 4

int main( ) {
    #if MY_DEF == 5 && MY_OTHER_DEF == 2
        printf("Hello in IF \n");
    #else
        printf("Hello in ELSE \n");
    #endif

    return 0;
}