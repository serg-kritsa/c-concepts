#include <stdio.h>
#include <stdnoreturn.h>

noreturn void my_exit(void);

void my_exit(void){
    printf("Exiting... \n");
    exit(0);
}

int main( ) {
    my_exit();
    return 0;
}