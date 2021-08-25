#include <stdio.h>

#pragma GCC poison printf

int main( ) {
    printf("Hello "); // compilation error

    return 0;
}