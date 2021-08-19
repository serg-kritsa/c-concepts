#include <stdio.h>

int main( ) {
    _Bool condition1;
    _Bool condition2;
    if (condition1) {
        if (condition2) {
            /* code */
        } else 
            ; // null statement
    } else {
        dosomethingelse();
    }
    
    
    return 0;
}