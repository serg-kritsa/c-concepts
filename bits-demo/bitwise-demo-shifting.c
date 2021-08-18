#include <stdio.h>

int main()  {
    int result = 0, a1 = 3; // 0000 0000    0000 0000   0000 0000   0000 0011 
    result = a1 << 1;       // 0000 0000    0000 0000   0000 0000   0000 0110 
    printf("%d", result); // 6
    result = 0, a1 = 138;   // 0000 0000    0000 0000   0000 0000   1000 1010 
    result = a1 << 2;       // 0000 0000    0000 0000   0000 0010   0010 1000
    printf("%d", result); // 552

    unsigned int result = 0, a1 = 1073741823; // 0011 1111    1111 1111   1111 1111   1111 1111 
    result = a1 >> 1;                         // 0001 1111    1111 1111   1111 1111   1111 1111 
    printf("%d", result); // 536 870 911
    result = 0, a1 = 5;                       // 0101
    result = a1 >> 2;                         // 0001
    printf("%d", result); // 1
    signed int result = 0, a1 = 138;   // 0000 0000    0000 0000   0000 0000   1000 1010
    result = a1 >> 2;                  // 0000 0000    0000 0000   0000 0010   1110 0010
    printf("%d", result); // 226                                               !! filled w/ 11 because of signed int type 
    
    return 0;
}
