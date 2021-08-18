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
    int *suspicious;
    int a;
    if (setjmp(buf)) {
        printf("back in main() \n");
        switch (setjmp(buf)) {
        case 0:
            a = *suspicious;
            printf("suspicious pointer is dereferenced \n");
            break;
        case 1:
            printf("suspicious is indeed a bad pointer \n");
            break;
        default:
            // break;
            // die("");
            printf("unexpected value returned by setjmp \n");
        }
    } else {
        printf("printed from else \n"); 
        myFn();
    }
    return 0;
}
// printed from else 
// in myFn()
// back in main()
// suspicious pointer is dereferenced