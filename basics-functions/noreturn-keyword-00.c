#include <stdio.h>

// added in C11
_Noreturn void fn01(void);
void fn01(void){
    printf("Aborting... \n");
    abort();
}

_Noreturn void fn02(int);
void fn02(int i){
    if(i < 0 ){
        printf("Negative value. Aborting... \n");
        abort();
    }
}

int main( ) {
    return 0;
}