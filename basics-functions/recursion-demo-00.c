#include <stdio.h>

int factorial(int);

int main( ) {
    factorial(3);

    return 0;
}

int factorial(int n) {
    if (n == 0) return 1;

    return n * factorial(n-1);
    
}