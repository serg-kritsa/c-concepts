#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf;

void myFn() {
    printf("in myFn() \n");
    longjmp(buf,1);
    printf("code after longjmp will not be executed!");
}
int main( ) {
    if (setjmp(buf)) printf("back in main()");
    else {
        printf("printed from else \n"); 
        myFn();
    }
    
    return 0;
}
// printed from else 
// in myFn()
// back in main()
