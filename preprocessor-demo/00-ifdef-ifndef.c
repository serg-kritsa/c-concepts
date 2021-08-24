#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

#ifndef JUST_CHECKING_2
    #define JUST_CHECKING_2
#endif

int main( ) {
    int i = 0, total = 0;

    for (i = 0; i < LIMIT; i++) {
        total += 2*i*i +1;
        #ifdef JUST_CHECKING
            printf("printed in #");
        #endif
    }
    
    printf("printed in code");

    return 0;
}