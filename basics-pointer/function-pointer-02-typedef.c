#include <stdio.h>

void fn1();
void fn2();

typedef void fnType(int);

int main() {
    fnType *fn_ptr = NULL;

    fn_ptr = fn1;
    printf("Address of function is %p \n", fn_ptr);
    (*fn_ptr)(10); // best practice // implicit call

    fn_ptr = fn2;
    printf("Address of function is %p \n", fn_ptr);
    (*fn_ptr)(100);

    return 0;
}
void fn1(int a){
    printf("--- Function #1 called with %d arg --- \n", a);
}
void fn2(int a){
    printf("--- Function #2 called with %d arg --- \n", a);
}