#include <stdio.h>

// symbolic constants // macros 1 of type 1
#define PI 3.14

// macros 1 of type 2
#define PRNT printf("x=%d \n", x);

// macros 2 of type 2
#define PRNT2(a, b) \
    printf("v1=%d \t", a); \
    printf("v2=%d \n", b);


int main( ) {
    int x = 8;
    PRNT;

    int a = 1, b = 2;
    PRNT2(a, b);

    return 0;
}