#include <stdio.h>
#include <stdnoreturn.h>

noreturn void fn(void);

void foo(void){
    return 10;
} // compiler warning // declared 'noreturn' has 'return' statement 

void fn(void){
    printf("Exiting... \n");
} // compiler warning // implicit (auto added) return statement 

int main( ) {
    fn();
    return 0;
}