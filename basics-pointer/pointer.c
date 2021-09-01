#include <stdio.h>

int main () {

    int  var = 20;   /* actual variable declaration */
    int  *ip;        /* pointer variable declaration */

    ip = &var;  /* store address of var in pointer variable*/

    printf("Address of var variable: %x\n", &var  );

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %x\n", ip );

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip );

    // 
    char *c;
    int *p;
    //declaring array of pointers
    int *ptr[5];
    printf("\n size of c = %d",sizeof(c)); 
    // size of c = 8
    printf("\n size of p = %d",sizeof(p));  
    // size of p = 8
    printf("\n size of ptr = %d",sizeof(ptr)); 
    // size of ptr = 40

    return 0;
}