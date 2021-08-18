// static (local)
// location:   inside a function/block
// scope:      within the function/block
// lifetime:   until the program terminates

// static (global)
// location:   outside all functions
// scope:      entire file in while it is declared
// lifetime:   until the program terminates
#include <stdio.h>


int fn() {
    static int count = 0;
    int localVar = 0;

    printf("automatic=%d static=%d \n", localVar, count);

    count++;
    localVar++;
    return count;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d \n", i);
        fn();
    }
    return 1;
}