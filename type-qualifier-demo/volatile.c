#include <stdio.h>


int main( ) {
    // volatile means don't use caching in register (to get value faster)
    volatile char ch;

    char* chptr;
    *chptr = 'X';
    // code that not change pointer
    *chptr = 'Z'; // a smart compiler would remove the 1st assignment 
    volatile char* vlchptr;
    *vlchptr = 'A'; // volatile prevents from removing this assignment 
    // code between
    *vlchptr = 'C';

    volatile const char c_v_ch;         // the same // here
    const volatile char* c_v_chptr;     // order does not matter

    return 0;
}