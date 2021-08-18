#include <stdio.h>
#include <stdlib.h>

void f1(int n, float * restrict a1, float * restrict a2) {
    int i;
    for (i = 0; i < n; i++) {
        a1[n] += a2[2];
    }
}

int main( ) {

    int array[10];
    int * restrict restar = (int*) malloc(10 * sizeof(int));
    int *par = array;

    memcpy(); 

    for (int n = 0; n < 10; n++) {
        par[n] += 5;
        restar[n] += 5;     // 1)
        array[n] *= 2;
        par[n] += 3;
        restar[n] += 3;     // 2)
        
        // restar[n] += 8;     // will be scope optimized by compiler because of restrict keyword
    }
    

    // printf("=%d ", );
    printf("\t");
    printf("\n");

    return 0;
}