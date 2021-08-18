// location:   outside all functions
// scope:      entire file plus other other files where the variables is declared as extern
// lifetime:   until the program terminates
#include <stdio.h>

int i = 5;

void foo(void);

int main(void) {
    printf(" %i ", i);
    foo();
    printf(" %i \n", i);
    
    return 0;
}
