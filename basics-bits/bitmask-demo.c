#include <stdio.h>

int main( ) {
    // turn on 
    int flags = 15,         // 0000 1111
        mask = 182;         // 1011 0110
    flags = flags | mask;   // 1011 1111 

    // turn off 
    flags = flags & ~(mask);// 0000 1001  

    // toggle 
    flags = flags ^ mask;   // 1011 1001  


    #define BYTE_MASK 0xff
    unsigned long color = 0x002a162f;
    unsigned char red, green, blue;
    red = color & BYTE_MASK;
    green = (color >> 8) & BYTE_MASK;
    blue = (color >> 16) & BYTE_MASK;

    return 0;
}