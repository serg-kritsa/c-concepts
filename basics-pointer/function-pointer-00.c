#include <stdio.h>

int main() {
    int (*pfunction)(int);
    int somefn(int);
    pfunction = somefn; // & and be added (ex. pfunction = &somefn), but not required 
    printf("CASE 1: calling fn via pointer. Received %d from 1st call \n", pfunction(5));
    printf("CASE 1: calling fn via pointer. Received %d from 2nd call \n", (*pfunction)(5));
    printf("CASE 1: differences between calls is short vs long (recommended to show a function pointer is used) syntax \n");

    printf("\n");
    printf("CASE 2: getting size of function pointer equals %d \n", sizeof(pfunction));

    // CASE 3: using as function param
    void signal(int (*pfunction)(int));

    return 0;
}
int somefn(int i){return i;}