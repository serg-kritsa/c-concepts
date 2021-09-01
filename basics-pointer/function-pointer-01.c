#include <stdio.h>

int fn1();
int fn2();

int main() {

    int (*fn_ptr)(); // fnptr is a synonym for int someFn();
    printf("Address of function is %p \n", fn_ptr);

    fn_ptr = fn1;
    // fn_ptr(); // shortcut
    (*fn_ptr)(); // best practice // implicit call

    fn_ptr = fn2;
    (*fn_ptr)();
    return 0;
}

int fn1(){
    printf("--- Function #1 called --- \n");
    return 0;
}
int fn2(){
    printf("--- Function #2 called --- \n");
    return 0;
}