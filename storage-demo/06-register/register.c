// location:   inside a function/block
// scope:      within the function/block
// lifetime:   until the function/block completes

#include <stdio.h>

// register int x; // ERROR: cannot be used in global scope outside main()

int main(void) {
    // register int x;

    // for (int i = 0; i < 5; i++) {
    //     printf("%d \n", x); // -2145130592
    // }

    
    // register int x;
    // int *a = &x; // ERROR: address of register variable requested 


    // int x = 15;
    // register int *a = &x; // allowed to store in address of variable
    // printf("%d \n", *a); // 15


    // int x = 15;
    // register static int *a = &x; // ERROR: more then one storage


    return 1;
}